#include <stdio.h>
int dd(int x);


int dd(int x)
{
	x %= 100;
	return x;
 } 
 
 int main()
 {
 	int T, i, j, sum;
 	scanf("%d",&T);
 	int a[T][2];
 	for( i = 0 ; i < T ; i++ )
 	{
 		scanf("%d%d",&a[i][0],&a[i][1]);
	 }
 	for( i = 0 ; i < T ; i++ )
 	{
 		sum=dd(  dd(a[i][j])  +  dd(a[i][j+1])  );
 		printf("%d\n",sum);
	}
	return 0;
 }
