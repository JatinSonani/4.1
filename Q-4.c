//Q.4 Write a Program to find the formula's answer (x-y)^2.
#include<stdio.h>

main() 
{
    int x,y,xy;
	printf("Enter Value X = ");
	scanf("%d" ,&x);
	printf("Enter Value y = ");
	scanf("%d",&y);
	
	xy = (x*x) - (2*x*y) + (y*y);
	printf("Value XY = %d", xy);   
}