#include<stdio.h>

main()

{
	float f,c;
	
	printf("enter the farenheit value ");
	scanf("%f",&f);
	
	c=((f-32)*5/9);
	
	printf("the celcius value is : %.9f",c);
}
