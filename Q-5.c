//Q.5 Write a Program to find the formula's answer (x+y)^3.

#include<stdio.h>
main()
{
	int  x,y,xy;
	
	printf("Enter Value Of X =");
	scanf("%d" ,&x);
	
	printf("Enter Value Of y =");
	scanf("%d",&y);
	
	xy = (x + y) * (x + y) * (x + y);
	
	printf("xy = %d", xy);
}