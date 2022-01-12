#include<stdio.h>

int square(int x)
{        
   return(x*x);                    
}

main()
{
   int a;
   
   printf("enter the number : ");
   scanf("%d",&a);
   
   printf("sum=%d",square(a));
}