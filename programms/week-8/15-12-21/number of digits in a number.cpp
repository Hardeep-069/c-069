#include <stdio.h>

main() 

{
    int n,digits=0;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    while (n != 0) 
    {
        n /= 10;
        digits += 1;
    }
    
    printf(" no. of digits in the number = %d",digits);
}
