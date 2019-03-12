#include <stdio.h>

int main()
{
	double l, bon1, bon2, bon3, bon4, bon5, w;
	bon1 = 10*0.1;//<=10ÍòÔª
	bon2 = bon1 + 10*0.075;//<=20
	bon3 = bon2 + 20*0.05;//<=40
	bon4 = bon3 + 20*0.03;//<=60
	bon5 = bon4 + 40*0.015;//<=100
	scanf("%lf",&l);
	if(l>100)
	{
		w = bon5 + (l-100)*0.01;
	}
	else if(l>60)
	{
		w = bon4 + (l-60)*0.015;
	}
	else if(l>40)
	{
		w = bon3 + (l-40)*0.03;
	}
	else if(l>20)
	{
		w = bon2 + (l-20)*0.05;
	}
	else if(l>10)
	{
		w = bon1 + (l-10)*0.075;
	}
	else
	{
		w = l*0.1;
	}
	printf("%.6f",w);
	return 0; 
}
