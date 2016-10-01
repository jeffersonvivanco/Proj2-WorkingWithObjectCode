 
/*
 * author: Jefferson Vivanco 
 * Function: The funciton Prob3 returns 0 if b is negative and if "unsigned b" is greater than 7. Else, it 
 * 			 multiplies b by 8 and sets it equal to an integer d. Then, it shifts the first parameter "a" by the
 * 			 value of the first byte of d. It returns the result of this. 
 * */
long problem3(long a, int b) {
	long result;
	if(b<0)
	{
		result = 0; 
		return result;
	}
	if(((unsigned)b)>7)
	{
		result =0;
		return result;
	}
	int d = 8*b; 
	result = a >> ((char)d); //Shifting by the first byte of d
	return result;
	
	

}
