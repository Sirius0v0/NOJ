#include <stdio.h>

int main()
{
	int a, b, c, i, n=1;//i´æ´¢ÓàÊı
	double sum;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d.",a/b);
	while(n<=c)
	{
		a %= b;
		a *= 10;
		printf("%d",a/b);
		n++;
	}
	return 0;
}
