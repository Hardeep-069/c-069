#include<stdio.h>
#include<math.h>

main()

{
	int a,b,c,d,e;
	
	printf("the quadratic equation is (a)x^2+(b)x+(c)");
	
	printf("\na = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("c = ");
	scanf("%d",&c);
	
	d=((-b)+(sqrt(pow(b,2)-(4*a*c))))/2*a;
	e=((-b)-(sqrt(pow(b,2)-(4*a*c))))/2*a;
	
    printf("root-1 = %d",d);
    printf("\nroot-2 = %d",e);
}