#include <stdio.h>
#include <string.h>

int main()
{
	char s[200];
	gets(s);
	if(s[0] == 'A' && s[1] == '#')
	{
		s[0] = 'B';
		s[1] = 'b';
		printf("%s\n",s);
	}
	else if(s[0] == 'A' && s[1] == 'b')
	{
		s[0] = 'G';
		s[1] = '#';
		printf("%s\n",s);
	}
	else if(s[0] == 'B' && s[1] == 'b')
	{
		s[0] = 'A';
		s[1] = '#';
		printf("%s\n",s);
	}
	else if(s[0] == 'C' && s[1] == '#')
	{
		s[0] = 'D';
		s[1] = 'b';
		printf("%s\n",s);
	}
	else if(s[0] == 'D' && s[1] == 'b')
	{
		s[0] = 'C';
		s[1] = '#';
		printf("%s\n",s);
	}
	else if(s[0] == 'D' && s[1] == '#')
	{
		s[0] = 'E';
		s[1] = 'b';
		printf("%s\n",s);
	}
	else if(s[0] == 'E' && s[1] == 'b')
	{
		s[0] = 'D';
		s[1] = '#';
		printf("%s\n",s);
	}
	else if(s[0] == 'F' && s[1] == '#')
	{
		s[0] = 'G';
		s[1] = 'b';
		printf("%s\n",s);
	}
	else if(s[0] == 'G' && s[1] == 'B')
	{
		s[0] = 'F';
		s[1] = '#';
		printf("%s\n",s);
	}
	else if(s[0] == 'G' && s[1] == '#')
	{
		s[0] = 'A';
		s[1] = 'b';
		printf("%s\n",s);
	}
	else
	{
		printf("UNIQUE\n");
	}
	return 0;
}
