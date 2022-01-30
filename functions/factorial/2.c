#include <stdio.h>

void fact(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    {
      fact=fact*i;
    }
    printf("%d!=%d",x,fact);   
}

main()
{
    int n;
    
    printf("enter the number : ");
    scanf("%d",&n);
    
    fact(n);   
}