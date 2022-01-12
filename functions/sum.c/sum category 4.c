#include<stdio.h>

int sum(int x,int y)
{        
   return(x+y);                    
}

main()
{
   int a,b;
   
   printf("enter the number : ");
   scanf("%d%d",&a,&b);
   
   printf("sum=%d",sum(a,b));
}