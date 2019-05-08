#include <stdio.h>

int main()
{
	int A[100], N, n , i, j=0, m;
	scanf("%d",&N);
	n=N;
	for( m = 0; m < N*N ; m++)
	{
		scanf("%d",&A[m]);
	}
	for( ; N > 0 ; N-- )
	{
		for( i = 0+j ; i < N+j ; i++ )
		{
			printf("%d",A[i]);
		}
		printf("\n");
		j = j + n;
	}
	return 0;
}
