#include<stdio.h>

main()

{
    int a,b;
    
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    
    if (a%2!=0 && b%2==0)
    printf("BLACK");
    
    else if (a%2!=0 && b%2!=0)
    printf("WHITE");
    
    else if (a%2==0 && b%2==0)
    printf("WHITE");
    
    else
    printf("BLACK");
    
}
