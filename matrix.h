/* 
Author => <pratimsina@gmail.com>
 
[THIS IS A HEADER FILE AND DOES NOT CONTAIN THE PROGRAM]
=> Sample program:

===================================
#include "NAME_OF_HEADER_FILE.h"   
int main()
{
	determinant_of_matrix();
}
===================================


This small software calculates the determinant of 2x2 matrix. Feel free to manupulate with the code making it
more efficient and even making it calculate 3x3 or higher dimensional matrix :)

*/



#include <stdio.h>

#define row 2
#define column 2


void determinant_of_matrix()
{
	int matrix[row][column] = {
		{1,2},
		{3,4}
	};

	/*This line of code prints the matrix (Just for testing purpose)
	for(int i=0; i<2;i++)
	{
		for(int j = 0; j<2;j++)
		{
			printf("%d ",matrix[i][j] );
		}
		printf("\n");
	}*/
	int determinant_matrix = (matrix[1][1] * matrix[0][0]) - (matrix[1][0] * matrix[0][1]);
	printf("%d is the determinant\n",determinant_matrix );
}
