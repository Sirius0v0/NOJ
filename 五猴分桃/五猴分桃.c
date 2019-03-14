#include <stdio.h>

int main()
{
	int x,n=0;
	double y=1;
	for( x = 254 ; n!=y ; x++ )
	{
		y=(x*625*5)/(16.0*16.0)-4;
		n=y;
	}
	printf("%d %d",n,4*(x-2));
	return 0;
}
