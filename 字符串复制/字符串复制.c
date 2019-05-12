#include <stdio.h>
void strcopy( char * a , char * b, int m);

void strcopy( char * a , char * b, int m)
{
	int i=0;
	for( ; a[m]!='\0' ; m++)
	{
		b[i++] = a[m];
	}
	b[i] = '\0';
}

int main()
{
	char A[100],B[100];
	int m;
	gets(A);
	scanf("%d",&m);
	strcopy(A,B,m);
	printf("%s",B);
	return 0;
}
