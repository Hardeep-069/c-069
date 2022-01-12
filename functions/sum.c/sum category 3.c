#include<stdio.h>

int sum(void)
{
   int n,m;
   printf("enter the numbers : ");
   scanf("%d%d",&n,&m);        
   return(n+m);                    
}

main()
{
   printf("sum=%d",sum());
}