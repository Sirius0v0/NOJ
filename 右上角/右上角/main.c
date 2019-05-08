#include <stdio.h>
int main()
{
	int N, A[100], i, J=0, n, m;
	scanf("%d",&N);
	n = N;
	for(int i = 0 ; i< N*N ; i++)
	{
		scanf("%d",&A[i]);
	}
	for(  ; N > 0 ; N-- )
	{
		for(m = 1 ; m <= n-N ; m++)
		{
			printf("  ");
		}
		for(int j = J + 0 + (m-1) ; j < J + n ; j++)
		{
			printf("%d ",A[j]);
		}
		printf("\n");
		J = J + n;
	}
	return 0;
}
