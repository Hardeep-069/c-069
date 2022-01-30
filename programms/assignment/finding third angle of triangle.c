#include<stdio.h>

main()

{
	float a,b,c;
	
	printf("enter the two angles of triangle : ");
	scanf("%f %f",&a,&b);
	
	printf("the third angle is %.2f",180-(a+b));
}
