/*
[THIS HEADER FILE CONTAINS THE FUNCTION NOT THE ACTUAL PROGRAM] 
Author: <pratimsina@gmail.com>
Version: [1.0]

Notice: Since the program has inefficient memory utiliztion,this version does not support very large factorials [It must not exceed 4 bytes]

This program prints the factorial of a number which is true for all natural numbers (Z∈N) where Z are the natural numbers form (0,∞) and N 
represents the sets of natural numbers; i.e. N = {0,1,2,3,...,∞}. 
*/
 


#include <stdio.h>

int factorial(int a)
{
	if(a<0)
	{
		printf("[INPUT-ERROR] ==> Cannot find the factorial of %d since it is a negative number\n",a);
		return -1;
	}
	else{
		int i, res=1;
		for(i = 1; i <= a; i++)
		{
			res*=i;
		}
		if(a<=12)
		{
			printf("%d is the factorial of %d\n",res,a );
			return res;
		}
		else
		{
			printf("[PROGRAM-ERROR] ==> The size of your integer exceeds 4 bytes ");
			return -1;
		}
		
	}

}
