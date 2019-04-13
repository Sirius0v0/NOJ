#include <stdio.h>
int timetrs( int x );

int timetrs(int x)
{
	if(x>59)
	{
		x-=60;
	}
	return x;
}


int main()
{
	int AH, AM, AS, BH, BM, BS, h, m, s;
	scanf("%d%d%d%d%d%d",&AH,&AM,&AS,&BH,&BM,&BS);
	s=timetrs(AS+BS);
	if( s==AS+BS )
	{
		m=timetrs(AM+BM);
	}
	else
	{
		m=timetrs(AM+BM+1);
	}
	if(m==AM+BM)
	{
		h=AH+BH;
	}
	else
	{
		h=AH+BH+1;
	}
	printf("%d %d %d\n",h,m,s);
	return 0;
}
