#include<stdio.h>

void square(void)
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("%d",n*n);                           
}

main()
{
   square();
}