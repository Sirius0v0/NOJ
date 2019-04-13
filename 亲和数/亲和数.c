#include <stdio.h>

int qinh(int x);

int main()
{
	int a, b;
	scanf("%d%d",&a, &b);
	if(a==qinh(b) && b==qinh(a))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}

int qinh(int x)
{
	int sum=1, i;
	for( i=2 ; i<=x/2 ; i++ )
	{
		if( x%i==0 )
		{
			sum += i;
		}
	}
	return sum;
}
