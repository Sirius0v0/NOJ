#include <stdio.h>

int main()
{
	int x, y, a, b, L,time;
	scanf("%d%d%d%d%d",&x,&y,&a,&b,&L);
	if(a==b)
	{
		printf("impossible");
		return 0;
	}
	if( x>y )
	{
		if(a>b)
		{
			L-=x-y;
			time=L/(a-b);
		}
		else
		{
			time=(x-y)/(b-a);
		}
	}
	else
	{
		if(a>b)
		{
			time=(y-x)/(a-b);
		}
		else
		{
			L-=y-x;
			time=L/(b-a);
		}
	}
	printf("%d",time);
	return 0;
}
