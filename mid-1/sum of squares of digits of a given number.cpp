#include<stdio.h>
#include<math.h>

main()

{
    int a,remainder,sum=0,square;
    
    printf("enter a number : ");
    scanf("%d",&a);
    
    while (a !=0)
    {
        remainder=a%10;
        square=pow(remainder,2);
        sum+=square;
        a/=10;
    }
    
    printf("the sum of squares of digits of the number is %d",sum);
}
