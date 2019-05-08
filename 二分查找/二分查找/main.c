#include <stdio.h>
int serch(int *A, int n, int m);

int serch(int *A, int n, int m)
{
	int t1;
	t1=0;
	while(t1!=(n-1))
	{
		if(A[(n-t1)/2] > m)
		{
			n=(n-t1)/2;
		}
		else
		{
			t1 = (n-t1)/2;
		}
	}
	if(A[t1] == m)
	{
		return t1;
	}
	else if(A[n]==m)
	{
		return n;
	}
	else
	{
		return -1;
	}
}

int main()
{
	int n, A[100], m;
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d",&A[i]);
	}
	scanf("%d",&m);
	if(serch(A,n,m)>=0)
	{
		printf("%d",serch(A,n,m));
	}
	else
	{
		printf("null");
	}
	return 0;
}
