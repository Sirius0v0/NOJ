#include <stdio.h>
#include <string.h>


int main()
{
	FILE *fp = fopen("DATA5612.CPP", "r"),*out;
	int i=0;
	char s1[1000],s2[1000];
	if(fp!=NULL)
	{
		out=fopen("DATA5612.TXT","w");
		while(!feof(fp))
		{
			if(fgets(s1,sizeof(s1)-1,fp)==NULL) continue;
			sprintf(s2,"%04d %s",++i,s1);
			fputs(s2,out);
		}
		fclose(out);
		fclose(fp);
	}
	return 0;
}
