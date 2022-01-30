#include<stdio.h>
#include<math.h>

main()

{

int a,c,d;
float b;

printf("enter a number : ");
scanf("%d",&a);
printf("enter the power : ");
scanf("%d",&d);

b=sqrt(a);
c=pow(a,d);

printf("the squareroot of the number is %f",b);
printf("\na^%d = %d",d,c);
}

