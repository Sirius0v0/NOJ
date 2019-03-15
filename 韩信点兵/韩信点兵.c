#include <stdio.h>

int main()
{
	int a, b, c, i=0, sum;
	scanf("%d%d%d",&a,&b,&c);
	for( sum = 10 ; sum<=100 ; sum++ )
	{
		if(!((sum-a)%3))
		{
			if(!((sum-b)%5))
			{
				if(!((sum-c)%7))
				{
					i++;
					printf("%d",sum);
				}
			}
		}
	}
	if(i==0)
	{
		printf("-1");
	}
	return 0;
}
