#include<stdio.h>

void prime_factors (int);

main()
{
    int a;
    
    printf("a=");
    scanf("%d",&a);

    prime_factors (a);
}

void prime_factors (int x)
{
    printf("the prime factors are : ");
    
    for (int b=2;b<=x;b++)
    {
      int n,d;
        
      if(x%b==0)
      {
        for(n=2;n<=b;n++)
        {
          d = b%n; 
          
          if (d==0)
          break;
        }
      }
     if (d==0 && b==n)
     printf("%d ",b);
    }
}

