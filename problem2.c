
/*
 * author: Jefferson Vivanco
 * Function: Prob2 calculates the product of 3 times "long a" and then shifts the product by 4. It sets it equal
 * 			 to t. Then if b is negative, it sets another long, "c", equal to 31 + b, but if b is positive then 
 * 			 it sets "c" equal to "b". Then it shifts c by 5 and returns the bit wise "and" operation of "t" and
 * 			 "c".
 * */
long problem2(long a, long b) {
	long t; 

	t = a+2*a;
	t = t<<4; 
	long c = 31 + b; 
	if(b >= 0)
	{
		c = b;
		
	}
	t = (c>>5) & t; 
	
	return t;

}
