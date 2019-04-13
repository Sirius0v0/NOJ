#include <stdio.h>
int getfloor(double x);

int getfloor(double x)
{
	if( x < 0 && (int)x != x )
	{
		return x-1;
	}
	return x;
}

int main()
{
	double x;
	scanf("%lf",&x);
	printf("%d",getfloor(x));
	return 0;
}
