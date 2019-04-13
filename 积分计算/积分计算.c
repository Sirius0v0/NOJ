#include <stdio.h>
#include <math.h>
#define Pre 1e-6 
#define F(x) 1.0/(1+pow((x),2))
#define S(x) (F(x)+F(x+Pre))*Pre/2.0
double intt(double a, double b);

double intt(double a, double b)
{
	double sum=0;
	for(  ; a<b ; a=a+Pre )
	{
		sum += S(a);
	}
	return sum;
}


int main()
{
	double a, b, sum;
	scanf("%lf%lf",&a,&b);
	sum=intt(a,b);
	printf("%f",sum);
	return 0;
}
