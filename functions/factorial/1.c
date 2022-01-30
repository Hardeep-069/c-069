#include <stdio.h>

void fact()
{
    int n,fact=1;
    
    printf("enter the number : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
      fact=fact*i;
    }
    printf("%d!=%d",n,fact);   
}

main()
{
    fact();   
}