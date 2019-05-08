#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,m,i,j,a[100][100],s1=0,s=0,s2;
	scanf("%d%d",&n,&m);
	for (i=0; i<n; i++)
		for (j=0; j<m; j++)
			scanf("%d",&a[i][j]);
	for (j=0; j<m; j++)
		s1+=a[0][j];
	for (j=0; j<m; j++)
		s1+=a[n-1][j];
	for (i=0; i<n; i++)
		s1+=a[i][0];
	for (i=0; i<n; i++)
		s1+=a[i][m-1];
	s1=s1-a[0][0]-a[0][m-1]-a[n-1][0]-a[n-1][m-1];
	for (i=0; i<n; i++)
		for (j=0; j<m; j++)
			s+=a[i][j];
	s2=s-s1;
	s=s1-s2;
	printf("%d",s);
	return 0;
}
