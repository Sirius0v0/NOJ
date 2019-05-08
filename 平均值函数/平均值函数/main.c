#include <stdio.h>
double avg(int A[] , int s , int e);

double avg(int A[] , int s , int e)
{
	double sum = 0 ;
	int i;
	for( i = s ; i <= e ; i++ )
	{
		sum += A[i];
	}
	sum /= e-s+1 ;
	return sum;
}

int main()
{
	int A[100], s, e, n, i;
	scanf("%d",&n);
	for(i=0; i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	scanf("%d%d",&s,&e);
	printf("%f",avg(A,s,e));
	return 0;
}
