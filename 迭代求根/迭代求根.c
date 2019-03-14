#include <stdio.h>
#include <math.h>

int main()
{
	double xn, xm, a;
	scanf("%lf",&a);
	xn = a/2;
	xm = 1.0/2 * (xn+a/xn);
	while(fabs(xn-xm) > 1e-5 )
	{
		xn = xm;
		xm = 1./2 * (xn+a/xn);
	}
	printf("%.5f",xm);
	return 0;
}
