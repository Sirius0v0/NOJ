#include<stdio.h>
int main()
{
	int n,k,i,j,t,sum,m;					//����n�� kΪn�����η�  m��¼��������֮�� 
	scanf("%d",&n);
	k=n*n*n;
	printf("%d*%d*%d=%d=",n,n,n,k);
	for(i=1; i<k; i=i+2)
		/*i��1��ʼ�ۼ�����(1+3+��)
		�������֮�ʹ���n�����η���������ʧ��
		��3��ʼ����(3+5+��)���Դ�����*/
	{
		sum=0;
		m=0;					//����sum �� m��Ϊsum����ֵ��
		for(j=i,t=i; ; j=j+2)	//tȷ����һ��������ֵ��Ϊ�������׼��
		{
			sum+=j;
			m++;
			if(sum==k)
			{
				for(i=t, k=1 ; k<=m ; i=i+2, k++)			//��ʱkû���ˣ��ù���������¼������������� 
				{
					if(k<m)
						printf("%d+",i);
					if(k==m)
					{
						printf("%d\n",i);
						return 0;
					}
				}
			}
			else if(sum>k)
			{
				break;
			}
		}
	}
}
