#include<stdio.h>

main()

{
    int a,b,c,*p,*q;
    
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    
    p=&a;
    q=&b;
    
    c=*p;
    a=*q;
    b=c;
    
    printf("\na=%d\nb=%d",a,b);
}
