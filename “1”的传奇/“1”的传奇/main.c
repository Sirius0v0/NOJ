#include <stdio.h>
#include <math.h>

int main()
{
	int n, i, j, k=0, x=1, y,z,m,p,q,a,s=0;//n �����֣�i��λ��*��m�� kλ��-1��q�� s ��һ�ĸ���
	scanf("%d",&n);
	m=n;
	for(i=1; i<12; i++)
	{
		m/=10;
		k++;
		if(m==0)
		{
			break;
		}
	}
	q=n;
	k=k-1;
	for(a=1; a<=k; a++)
	{
		x*=10;
	}
	y=q%x;//y�Ǻ�λ����
	z=q/x;//z ����λ����
	p=q-y;
	if(z>=2)
	{
		s=s+x+z*k*(x/10);
	}
	else
	{
		s=s+z*k*(x/10);
	}
	for(j=p; j<=n; j++)
	{
		m=j;
		for(i=1; i<12; i++)
		{
			x=m%10;
			if(x==1)
			{
				s++;
			}
			m=m/10;
			if(m==0)
			{
				break;
			}
		}
	}
	printf("%d",s);
	return 0;
}
