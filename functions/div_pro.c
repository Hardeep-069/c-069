#include<stdio.h>

int difference (int,int);
int product (int,int);

main()
{
    int a,b;
    
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    
    printf("the difference is %d",difference(a,b));
    printf("\nthe product is %d",product(a,b));
}

int difference (int x,int y)
{
    return(x-y);
}

int product (int x,int y)
{
    return(x*y);
}