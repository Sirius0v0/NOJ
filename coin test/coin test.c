#include <stdio.h>
#include <math.h>
int chu(int m, int n);

int chu(int m , int n)
{
	int i;
	if( m == 0 )
	{
		return n;
	}
	else if ( n == 0)
	{
		return m;
	}
	else
	{
		i = m>n?n:m;
		while(m%i!=0 || n%i!= 0)
		{
			i--;
		}
	}
	return i;
}

int main()
{
	char aa[1000];
	int a=0, b=0 ,i;
	gets(aa);
	for( i = 0 ; aa[i]!='\0';i++ )
	{
		if(aa[i]=='S')
		{
			printf("WA\n");
			return 0;
		}
		else if(aa[i]=='U')
		a++;
		else if(aa[i]=='D')
		b++;
	}
	if(fabs((double)a/(a+b)-0.5)>0.003)
	{
		printf("Fail\n");
	}
	else
	{
		printf("%d/%d\n",a/chu(a,b+a),(a+b)/chu(a,b+a));
	}
	return 0;
}
