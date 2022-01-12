#include<stdio.h>

int square(void)
{
   int n;
   printf("enter the number : ");
   scanf("%d",&n);        
   return(n*n);                    
}

main()
{
   printf("sum=%d",square());
}