#include <stdio.h>
int main()
{
	int N, A[100], i, J=0;
	scanf("%d",&N);
	for(int i = 0 ; i< N*N ; i++)
	{
		scanf("%d",&A[i]);
	}
	for( i = 1 ; i <= N ; i++ )
	{
		for(int j = 1 ; j <= N-i ; j++)
		{
			printf("  ");
		}
		for(int j = J + N - i ; j < J + N ; j++)
		{
			printf("%d ",A[j]);
		}
		printf("\n");
		J = J + N;
	}
	return 0;
}
