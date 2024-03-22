//Q.2 Write a Program to Swap two variables without using a third variable.

#include <stdio.h>

main() 
{
    int a = 10, b = 20;

    printf("Enter  (a and b): ");
    scanf("%d %d", &a, &b);

    // Swap using addition and subtraction
    a = a + b;
    b = a - b;
    a = a - b;

    
    printf("\n Value a=%d",a);
    printf("\n Value b=%d",b);
}

