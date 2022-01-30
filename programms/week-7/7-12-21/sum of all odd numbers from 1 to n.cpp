#include<stdio.h>

main()

{
    int n,b,c=0;
    
    printf("the range is from 1 to n");
    printf("\nn = ");
    scanf("%d",&n);
    
    for (b=1;b<=n;b++)
    {
        if (b%2!=0)
        c=c+b;
    }
    printf("the sum of all odd numbers from 0 to %d = %d",n,c);
}
