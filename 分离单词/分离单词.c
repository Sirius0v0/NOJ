#include <stdio.h>

int main()
{
	char A[1000] , B[1000][1000];
	int i , j ,n=0 , m=0;
	gets(A);
	for( j = 0 ; (A[j] >= 'a' && A[j] <= 'z') || ( A[j] >= 'A' && A[j] <= 'Z') ;  )
	{
		for( i = j ;  ; i++ )
		{
			if( (A[i] >= 'a' && A[i] <= 'z') || ( A[i] >= 'A' && A[i] <= 'Z') )
				B[n][m++] = A[i];
			else
			{
				B[n++][m] = ' ';
				m=0;
				j = i;
				while(!((A[j] >= 'a' && A[j] <= 'z') || ( A[j] >= 'A' && A[j] <= 'Z')) && A[j]!= '\0' )
				{
					j++;
				}
				break;
			}
		}
	}
	for(j = n-1 ; j >= 0 ; j-- )
		printf("%s",B[j]);
	return 0;
}
