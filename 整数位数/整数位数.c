#include <stdio.h>

int main()
{
	double a;
	int n, A;
	scanf("%lf",&a);
	A = a;
	for( n = 0 ; A%10!=0 ; n++ )
	{
		A /= 10;
	}
	printf("%d",n);
	return 0;
}
