/*
Author: <pratimsina@gmail.com>
Version: [1.0]


This program prints the factorial of a number which is true for all natural numbers (Z∈N) where Z are the natural numbers form (0,∞) and N 
represents the sets of natural numbers; i.e. N = {0,1,2,3,...,∞}. 
*/
 


#include <stdio.h>

int factorial(int a)
{
	int i,res=1;
	for(i=1;i<=a;i++)
	{
		res*=i;
	}
	printf("%d is the factorial of %d\n",res,a );
	return res;
}