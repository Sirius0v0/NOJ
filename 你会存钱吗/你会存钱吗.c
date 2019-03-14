#include <stdio.h>
#include <math.h>

int main()
{
	double l1, l2, l3, l5, l8, max=2000, L;
	int n1=0, n2=0, n3=0, n5=0, n8=0, N1, N2, N3, N4, N5, N8;
	l1 = 0.0063*12;
	l2 = 0.0066*12*2;
	l3 = 0.0069*12*3;
	l5 = 0.0075*12*5;
	l8 = 0.0084*12*8;
	for( n8=0 ; n8 <= 2 ; n8++ )
	{
		for( n2=0 ; n2 <= ( 20-n8*8-n5*5-n3*3-n1 )/2 ; n2++ )
		{

			for( n3=0 ; n3 <= ( 20-n8*8-n5*5-n2*2-n1 )/3 ; n3++ )
			{
				for( n5=0 ; n5 <= ( 20-n8*8-n3*3-n2*2-n1 )/5 ; n5++ )
				{
					n1 = 20-n5*5-n3*3-n2*2-n8*8;
					L=2000*pow(1+l1,n1)*pow((1+l2),n2)*pow((1+l3),n3)*pow((1+l5),n5)*pow((1+l8),n8);
					if(L>max)
					{
						N1=n1,N2=n2,N3=n3,N5=n5,N8=n8;
						max=L;
					}
					n1=0;
				}
				n5=0;
			}
			n3=0,n5=0;
		}
		n2=0,n3=0,n5=0;
	}
	printf("%d %d %d %d %d\n%.2f",N8,N5,N3,N2,N1,max);
	return 0;

}
