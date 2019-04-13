#include <stdio.h>
int C(int a, int b);
int factorial(int x);


int factorial(int x)
{
	int sum=x;
	if(x==0)
	{
		return 1;
	}
	while((x-1)!=0)
	{
		sum *= x-1;
		x--;
	}
	return sum;
}


int C(int a, int b)
{
	int sum;
	if( a>b && a>0 && b>=0 )
	{
		sum = factorial(a)/factorial(b)/factorial(a-b);
	}
	else
	{
		printf("wrong");
	}
	return sum;
}

int main()
{
	double a, b;
	int m, n;
	scanf("%d%d",&m,&n);
	a=m,b=n;
	printf("%d",C(a,b));
	return 0;
}
