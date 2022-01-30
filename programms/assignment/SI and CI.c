#include <stdio.h>
#include <math.h>

main()
{
    float p,t,r,CI,SI;
    char b;
    
    
    
    printf("enter principle : ");
    scanf("%f",&p);

    printf("enter time : ");
    scanf("%f",&t);

    printf("enter rate : ");
    scanf("%f",&r);
    printf("click s for SI and c for CI : ");
    scanf("%c",&b);
    
    SI = (p*t*r)/100;
    CI = p*(pow((1+r/100),t));

    if (b==99)
    printf("compound interest = %f", CI);
    
    else if (b==115)
    printf("simple interest = %f", SI);
}
