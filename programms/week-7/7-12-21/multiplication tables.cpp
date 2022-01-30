#include<stdio.h>

main()

{
    int a,b;
    
    printf("enter a number : ");
    scanf("%d",&a);
    
    for (b=1;b<=12;b++)
    {
     printf("\n %dx%d=%d",a,b,a*b);
    }
}
