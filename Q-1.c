//Q.1 Write a Program to Swap two variables using the third variable.
#include <stdio.h>

main()
{
	
    int a, b, c;

    // Input values for a and b
    printf("Enter Value Of A=");
    scanf("%d",&a);
    
    printf("Enter Value Of B=");
    scanf("%d",&b);
    

    // Swap logic using a third variable
    c = a;
    a = b;
    b = c;

    // Print the swapped values
    printf("Value A = %d\n",a);
    printf("Value B = %d",b);

    return 0;
}
