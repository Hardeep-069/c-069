#include<stdio.h>

main()

{
    int a,n;
    
    printf("n = ");
    scanf("%d",&n);
    
    for (a=1;a<=n;a++)
    {
        if (a%2!=0)
        printf("\n%d",a);
    }
}
