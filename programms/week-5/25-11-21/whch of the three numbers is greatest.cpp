#include<stdio.h>

main()

{
int a,b,c;

printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
printf("c=");
scanf("%d",&c);

if(a>b && a>c)
printf("a is greatest");

if(b>a && b>c)
printf("b is greatest");

else
printf("c is greatest");
}




