#include <stdio.h>

int main()
{
	int i;
	double sum=0, a=1, b=2, t;
	for( i = 0 ; i < 20 ; i++ )
	{
		sum += b/a;
		a += b;
		t=a,a=b,b=t;
	}
	printf("%.6f",sum);
	return 0;
}
