#include <stdio.h>
void InsertionSort(int *A, int s, int m);

void InsertionSort(int *A, int s, int m)
{
	int t = 0;
	int i, j;
	for(i=s+1; i < m+1; i++)
	{
		t = A[i];
		j = i;
		while(j > s && A[j-1] < t)
		{
			A[j] = A[j-1];
			j--;
		}
		A[j] = t;
	}
}

int main()
{
	int A[100], i, j, n, s, m;
	scanf("%d",&n);
	for(i=0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
	scanf("%d%d", &s, &m);
	InsertionSort(A, s, m);
	for(j=0; j<n; j++)
	{
		printf("%d ", A[j]);
	}
	return 0;
}
