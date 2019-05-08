#include <stdio.h>
void BubbleSort(int *A, int s, int m);

void BubbleSort(int *A, int s, int m)
{
	int i, j, t;
	for( i = 1 ; i < (m-s+1) ; i++)
	{
		for( j = s ; j < (m-(i-1)) ; j++)
		{
			if(A[j]<A[j+1])
			{
				t = A[j+1];
				A[j+1] = A[j];
				A[j] = t;
			}
		}
	}
}

int main()
{
	int s, m, n, A[100], i,j;
	scanf("%d",&n);
	for(j = 0; j<n ; j++)
	{
		scanf("%d",&A[j]);
	}
	scanf("%d%d",&s, &m);
	BubbleSort(A,s,m);
	for(i = 0; i<n ; i++)
	{
		printf("%d ",A[i]);
	}
	return 0;
}
