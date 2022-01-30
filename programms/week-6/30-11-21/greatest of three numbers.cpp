#include<stdio.h>

main()

{
	float a,b,c;
	
	printf("a = ");
	scanf("%f",&a);
	
    printf("b = ");
	scanf("%f",&b);
	
	printf("c = ");
	scanf("%f",&c);
	
	if (a>b && a>c)
	printf("the greatest number is %f",a);
	
	else if (b>a && b>c)
	printf("the greatest number is %d",b);
	
	else
	printf("the greatest number is %f",c);
	
}
