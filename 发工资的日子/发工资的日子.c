#include <stdio.h>
int sheet(int a[], int n);

int sheet(int a[],int n)
{
	int i, sum=0;
	for( i = 0 ; i < n ; i++)
	{
		while(a[i] >= 100)
		{
			sum++;
			a[i]-=100;
		}
		while(a[i] >= 50)
		{
			sum++;
			a[i]-=50;
		}
		while(a[i] >= 10 )
		{
			sum++;
			a[i]-=10;
		}
		while(a[i] >= 5 )
		{
			sum++;
			a[i]-=5;
		}
		while(a[i] >= 2 )
		{
			sum++;
			a[i]-=2;
		}
		if(a[i]==1)
		{
			sum++;
		}
	}
	return sum;
}

int main()
{
	int n, i;
	scanf("%d",&n);
	int a[n];
	for( i = 0 ; i < n ; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",sheet(a,n));
	return 0;
}
