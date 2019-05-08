#include <stdio.h>
int Insert(int *A, int n);

int Insert(int *A, int n)
{
	int i, j, t, m=0;
	for( i = 1 ; i < n ; i++ )
	{
		t = A[i];
		j = i;
		while( j > 0 && A[j-1] > t )
		{
			A[j] = A[j-1];
			j--;
			m++;
		}
		A[j] = t;
	}
	return m;
}
int main()
{
	int n, A[100];
	scanf("%d",&n);
	for( int i = 0; i < n ; i++ )
	{
		scanf("%d",&A[i]);
	}
	printf("%d",Insert(A,n));
	return 0;
}
