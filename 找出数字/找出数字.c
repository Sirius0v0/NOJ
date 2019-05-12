#include <stdio.h>
#include<string.h>

int findnum(char *str, int * aa);


int findnum(char *str, int * aa)
{
	int i ,n = 0 , k , h =0 ; 
	for( i = 0 ; str[i]!='\0' ; i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			n++;
			for(k = i ; ; k++)
			{
				if(str[k]>='0'&&str[k]<='9')
				{
					i++;
					aa[h] = aa[h]*10+(str[k]-'0');
				}
				else
				{
				h++;
					break;
				}
			}
		}
	}
	return n;
 } 
 
int main()
{
	char str[100];
	int n,i,aa[100]={};
	gets(str);
	n = findnum(str, aa);
	
	printf("%d\n",n);
	for(i = 0 ; i < n ; i++)
	{
		printf("%d ",aa[i]);
	}
	return 0;
 } 
