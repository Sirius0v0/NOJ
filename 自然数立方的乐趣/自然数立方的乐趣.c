#include<stdio.h>
int main()
{
	int n,k,i,j,t,sum,m;					//输入n， k为n的三次方  m记录几个奇数之和 
	scanf("%d",&n);
	k=n*n*n;
	printf("%d*%d*%d=%d=",n,n,n,k);
	for(i=1; i<k; i=i+2)
		/*i从1开始累加试验(1+3+…)
		如果奇数之和大于n的三次方，则试验失败
		从3开始试验(3+5+…)，以此类推*/
	{
		sum=0;
		m=0;					//重置sum 与 m（为sum赋初值）
		for(j=i,t=i; ; j=j+2)	//t确定第一个奇数的值，为后续输出准备
		{
			sum+=j;
			m++;
			if(sum==k)
			{
				for(i=t, k=1 ; k<=m ; i=i+2, k++)			//此时k没用了，拿过来用作记录输出的奇数个数 
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
