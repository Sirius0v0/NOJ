#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,i,sum=0;
	for( a = 4 ; a <= 1000 ; a++ )
	{
		b=a;
		for( i = 2 ; i <= a ; i++ )
		{
			if(!(b%i))
			{
				sum+=i;
				b/=i;
				i--;
			}
		}
		b=a;
		if( sum == a ) 
		{
			printf("%d=1",a);
			for(i = 2 ; i <= a ; i++)
			{
				if(!(b%i))
				{
					printf("+%d",i);
					b/=i;
					i--;
				}
			}
			printf("\n");
		}
	}
	return 0;
}
