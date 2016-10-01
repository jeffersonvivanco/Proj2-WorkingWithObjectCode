 
/*
 * author: Jefferson Vivanco
 * Function: Prob4 adds all the elements in the array and returns the sum. While adding all the elements, comp4
 * 			 increments every element in the array by 2. 
 * 
 * */
long comp4(long *array, long b) {
	long result  = array[0]; //setting result equal to the element that array points to 
	b = result + b; //incrementing b by result
	array[0] = b; //changing the element of the array to b
	return result; //returning the original value of the array 
	
}

long problem4(long *array, int b) {
	long result; 
	long *arrayPointer = array; //sets a pointer to array
	int counter = 0; 
	long value1 = 0; //Where the addition of elements will be stored
	while(counter < b)
	{
		
		array = 0+ arrayPointer + counter; //Incrementing the pointer so it can point to the next element
		value1 = value1+comp4(array,2);//adding all the elements of the array 
		counter++;
		
	}
	result = value1;//returning the result of the addition to all the elements 
	return result;	
}
