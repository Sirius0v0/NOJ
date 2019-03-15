#include <stdio.h>

int main()
{
	int a, b, c;
	double sum;
	scanf("%d%d%d",&a,&b,&c);
	sum=1.0*a/b;
	printf("%.*f",c,sum);
	return 0; 
}
