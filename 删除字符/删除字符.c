#include <stdio.h>
void deletechar(char S[], char c );

void deletechar(char S[],char c)
{
	int i , j=0 ;
	for( i = 0 ; S[i]!='\0';i++)
	if(S[i]!=c)
	S[j++] = S[i];
	S[j]='\0';
}

int main()
{
	char str[200],c;
    gets(str);
    scanf("%c",&c);
    deletechar(str,c);
    puts(str);
    return 0;
}
