#include <stdio.h>

int main()
{
	int a=1, b=1, t, n=2, s=2;
	for( ; !(s>=100 && s-b<100); n++ )
	{
		a+=2*b;
		t=a,a=b,b=t;
		s+=b;
	}
	printf("%d\n",n-1);
	a=1, b=1, n=2, s=2;
	for( ; !(s>=1000 && s-b<1000) ; n++ )
	{
		a+=2*b;
		t=a,a=b,b=t;
		s+=b;
	}
	printf("%d\n",n-1);
	a=1, b=1, n=2, s=2;
	for( ; !(s>=10000 && s-b<10000) ; n++ )
	{
		a+=2*b;
		t=a,a=b,b=t;
		s+=b;
	}
	printf("%d\n",n-1);
	return 0;
} 
