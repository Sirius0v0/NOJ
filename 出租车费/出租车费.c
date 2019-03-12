#include <stdio.h>

int main()
{
	double dis, money;
	int x;
	scanf("%lf",&dis);
	x = dis;
	if(dis>x)
	{
		x++;
	}
	if( x > 15 )
	{
		money = 7 + 13*1.5 +(x-15)*2.1;
	}
	else if( x > 2)
	{
		money = 7 + (x-2)*1.5;
	}
	else
	{
		money = 7;
	}
	printf("%.6f",money);
	return 0;
} 
