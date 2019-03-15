#include <stdio.h>
#include <math.h>

int main()
{
	int k, x, y;
	float sum, a, b;
	scanf("%d",&k);
	for( y = k+1 ; y <= 2*k ; y++ )
	{
		x=k*y/(y-k);
		a=1.0/x;
		b=1.0/y;
		sum=1.0/k;
		if( (fabs(sum-(a+b))<1e-6 )&& (y<=x))
		{
			printf("1/%d=1/%d+1/%d\n",k,x,y);
		}

	}
	return 0;
}
