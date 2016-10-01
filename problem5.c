 
#include <stdlib.h> 
#include <stdio.h>

/*
 * author: Jefferson Vivanco
 * Function: Prob5 takes no parameters. Prob5 makes an array of 10 elements and then it adds 10 random elements
 * 			 using a while loop. The random elements are generated using the random element and then getting
 * 			 the %201 of each value. Comp5 returns the product of the elements of the array over the sum of the
 * 			 elements.
 * */

long comp5(long *array, int size) {
	long result;
	int counter = 0; 
	result = 1; 
	long value2 = 0; //value that will hold the sums
	size = size-1;
	long value1; 	//used to store element of array 
	while(size > counter)
	{
		
		value1 = array[counter];//setting the counterth element of the array to value1
		value2 = value2 + value1; //adding the elements
		result = result * value1; //getting product of elements
		counter = counter + 1; 	//increments counter so we can look at the next element of the array 
	}
	result = result/value2;//computing product/sum
	return result;  	
}
long problem5() {
	long result;
	long array[10];//creating an array of 10 elements 
	int counter = 0; 	
	while(counter<=9)
	{	
		int randValue = rand();//generating a random value
		long value = randValue % 201; //Performing mod operation on randValue
		array[counter] = value;//setting the counterth element of the array to value, a random value % 201
		counter = counter+1; //incrementing counter so we assign the next element at the array 		
	}
	int size=10;  //Size of array
	result = comp5(array,size);//Passing the array and the size of the array of to comp5 so it can compute 
							   //the product of the elements of the array divided by the sum of all the elements
	return result;	
}
