#include <stdio.h>

int main()
{
	int a, b, c, i, n=1, m;//i´æ´¢ÓàÊı
	scanf("%d%d%d",&a,&b,&c);
	printf("%d.",a/b);
	while(n<=(c-1))
	{
		a %= b;
		a *= 10;
		printf("%d",a/b);
		n++;
	}
	a %= b;
	a *= 10;
	m = a/b;
	a %= b;
	a *= 10;
	a /= b;
	if(a>=5)
	{
		printf("%d",m+1);
	}
	else
	{
		printf("%d",m);
	}
	return 0;
}
