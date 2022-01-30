#include<stdio.h>

main()

{
    int n,rem,c;
    
    printf("enter a number = ");
    scanf("%d",&n);
    
    for(int i=1;i<=2;i++)
    {
        rem=n%10;
        c=rem;
        n=n/10;
    }
    printf("the tenths digit is %d",c);
}
