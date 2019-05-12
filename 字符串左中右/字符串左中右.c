#include <stdio.h>
#include<string.h>
void left(char *str , int n , char * c);
void right(char *str , int n, char * c);
void mid( char * str, int loc, int n , char * c);

void left(char *str , int n , char * c)
{
	int i = 0 ;
	for( ; i < n ; i++)
	{
		c[i] = str[i];
	}
	c[i] = '\0';
}

void right(char * str, int n , char * c)
{
	int i, j ;
	j = strlen(str)-n;
	for ( i = 0 ; str[j]!='\0';j++)
	{
		c[i++] = str[j]; 
	}
	c[i]='\0';
}

void mid(char * str, int loc, int n , char * c)
{
	int i;
	for( i = 0 ; i < n ; i++)
	{
		c[i] = str[loc++];
	}
	c[i] = '\0';
}

int main()
{
	char str[100],a[100],b[100],c[100];
	int n , loc ;
	gets(str);
	scanf("%d%d",&n,&loc);
	left(str, n, a);
	right(str, n ,b);
	mid(str, loc, n , c);
	printf("%s\n",a);
	printf("%s\n",b);
	printf("%s\n",c);
	return 0; 
}
