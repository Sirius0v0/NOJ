#include <stdio.h>
#include <math.h>

int main()
{
	int a,i,sum=1;
	for( a = 4 ; a <= 1000 ; a++ )
	{
		sum=1;
		for( i = 2 ; i < a ; i++ )
		{
			if(!(a%i))
			{
				sum+=i;
			}
		}
		if( sum == a ) 
		{
			printf("%d=1",a);
			for(i = 2 ; i < a ; i++)
			{
				if(!(a%i))
				{
					printf("+%d",i);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
