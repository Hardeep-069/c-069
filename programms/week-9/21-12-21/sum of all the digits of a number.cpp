#include<stdio.h>

main()

{
    int a,remainder,sum=0;
    
    printf("enter a number : ");
    scanf("%d",&a);
    
    while (a !=0)
    {
        remainder=a%10;
        sum+=remainder;
        a/=10;
    }
    
    printf("the sum of all the digits of the number is %d",sum);
}
