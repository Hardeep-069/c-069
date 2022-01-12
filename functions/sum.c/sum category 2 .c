#include<stdio.h>

void sum(int x,int y)
{
    printf("%d",x+y);                           
}

main()
{
   int n,m;
   
   printf("enter the numbers : ");
   scanf("%d%d",&n,&m);
   
   sum(n,m);
}