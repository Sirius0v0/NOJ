#include <stdio.h>

int main()
{
	char A[3][80];
	int B[5]={0,0,0,0,0},i,j;
	for( i = 0 ; i <3 ; i++)
	gets(A[i]);
	for( i = 0 ; i < 3 ; i++)
	{
		for( j = 0; A[i][j]!='\0';j++)
		{
			if( A[i][j] >= 'A' && A[i][j] <= 'Z' )
			B[0]++;
			else if( A[i][j] >= 'a' && A[i][j] <= 'z' )
			B[1]++;
			else if ( A[i][j] >= '0' && A[i][j] <= '9' )
			B[2]++;
			else if (A[i][j] == 32)
			B[3]++;
			else
			B[4]++;
		}
	}
	for( i = 0 ; i < 5 ; i++ )
	printf("%d ",B[i]);
	return 0;
}
