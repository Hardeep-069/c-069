#include<stdio.h>

void sum(void)
{
    int n,m;
    printf("enter the numbers : ");
    scanf("%d%d",&n,&m);
    printf("%d",n+m);                           
}

main()
{
   sum();
}