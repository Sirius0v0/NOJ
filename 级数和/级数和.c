#include <stdio.h>
#include <math.h>

int main()
{
	int n, l, i, a, b, A, B;
	double sum=0;
	scanf("%d",&n);
	for( i=1 ; i<=n ; i++ )
	{
		a=pow(2,i),A=a*2;
		b=pow((-1),i),B=(-1)*b;
		sum+=(1.0*a*B)/(a+b)/(A+B);
	}
	printf("%.6f",sum);
	return 0;
}
