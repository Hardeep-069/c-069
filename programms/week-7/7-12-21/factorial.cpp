#include<stdio.h>

main()

{
    int a,b,c=1;
    
    printf("enter a number : ");
    scanf("%d",&a);
    
    for (b=a;b>=1;b--)
    {
    c=c*b;
    }
    printf("%d! = %d",a,c);
}
