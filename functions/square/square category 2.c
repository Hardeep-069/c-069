#include<stdio.h>

void square(int x)
{
    printf("%d",x*x);                           
}

main()
{
   int n;
   
   printf("enter a number : ");
   scanf("%d",&n);
   
   square(n);
}