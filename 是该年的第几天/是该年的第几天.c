#include <stdio.h>

int main()
{
	int year, month, day, n=0;
	scanf("%d-%d-%d",&year, &month, &day);
	switch(month-1)
	{
		case 12: n+=31;
		case 11: n+=30;
		case 10: n+=31;
		case 9:  n+=30;
		case 8:  n+=31;
		case 7:  n+=31;
		case 6:  n+=30;
		case 5:  n+=31;
		case 4:  n+=30;
		case 3:  n+=31;
		case 2:  n+=0;
		case 1:  n+=31;
		case 0:  break;
	}
	if(year%4==0 && year%100!=0 || year%400==0 ) 
	{
		if(month>2)
		n+=29;
	}
	else
	{
		if(month>2)
		n+=28;
	}
	n+=day;
	printf("%d",n);
	return 0;
}
