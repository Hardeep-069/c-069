#include <stdio.h>

main()
{
    int a,b,hcf;

    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);

    for(int i=1; i<=a && i<=b ;i++)
    {
        if(a%i==0 && b%i==0)
        hcf = i;
    }

    printf("GCD or HCF of %d and %d is %d", a, b, hcf);
}
