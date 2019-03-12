#include <stdio.h>

int main()
{
	int n, a, N=0;
	scanf("%d",&n);
	a=n;
	while( a > 10 )
	{
		N = N*10 + (a % 10);
		a /= 10;
	}
	N = N*10 + a;
	if( n == N )
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
