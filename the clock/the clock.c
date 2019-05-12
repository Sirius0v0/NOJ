#include <stdio.h>
#include <string.h>
int main()
{
	char A[5];
	int i = 0,n;
	gets(A);
	n = strlen(A);
	if(n==1)
	{
		if(A[0]=='I')
		printf("1\n");
		else if(A[0]=='V')
		printf("5\n");
		else
		printf("10\n");
	}
	else if( n == 2)
	{
		if(A[0]=='I'&&A[1]=='I')
		printf("2\n");
		else if(A[0]=='I'&&A[1]=='V')
		printf("4\n");
		else if(A[0]=='V'&&A[1]=='I')
		printf("6\n");
		else if(A[0]=='I'&&A[1]=='X')
		printf("9\n");
		else
		printf("11\n");
	}
	else if( n == 3)
	{
		if(A[0]=='I')
		printf("3\n");
		else if(A[0]=='V')
		printf("7\n");
		else
		printf("12\n");
	}
	else
	printf("8\n");
	return 0;
 } 
