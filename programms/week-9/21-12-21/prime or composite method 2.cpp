#include<stdio.h>

main()

{
    int n;
    
    printf("enter a number : ");
    scanf("%d",&n);
    
    int i=2;
    while(i<=n-1)
    {
        if (n%i==0)
        {
            printf("COMPOSITE");
            break;
        }
        i++;
    }
    if(i==n)
    printf("PRIME");
    }
