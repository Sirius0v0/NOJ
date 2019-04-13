#include <stdio.h>
int ack(int m, int n);

int ack(int m, int n)
{
	if( m!=0 && n!=0 )
	{
		n=ack(m-1,ack(m,n-1));
	}
	if( m!=0 && n==0 )
	{
		n=ack(m-1,1);
	}
	if(m==0 && n!=0)
	{
		n=n+1;
	}
	return n;
}

int main()
{
	int m, n;
	scanf("%d%d",&m,&n);
	printf("%d",ack(m,n));
	return 0;
}
