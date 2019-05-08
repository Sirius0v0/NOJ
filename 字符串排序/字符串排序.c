#include <stdio.h>
#include <string.h>

int main()
{
	char A[10][20] ,B[20]; 
	int i ,j ;
	for(i = 0 ; i < 10 ; i++) 
	scanf("%s",A[i]);
for( i = 1 ; i < 10; i++)
	{
		for( j = 0 ; j < 9-i ; j++)
		{
			if( strcmp(A[j],A[j+1])>0)
			{
				strcpy(B,A[j]);
				strcpy(A[j],A[j+1]);
				strcpy(A[j+1],B);
			}
		}
	}
	for(i = 0; i< 10 ;i++)
	printf("%s ",A[i]);
	return 0;
}
