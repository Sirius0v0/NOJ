#include <stdio.h>
#include <math.h>

int main()
{
	int i, n=0;
	double pi=0;
	for(i=1;fabs(1.0/i)>=1e-6;i+=2,n++)
	{
		pi += pow(-1,n)*1.0/i;
	}
	printf("%.6f",pi*4);
	return 0;
}
