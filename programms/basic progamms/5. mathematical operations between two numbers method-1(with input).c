#include<stdio.h>

main()

{
	int sum,diff,product;
	float a,b,div;
	
	printf("enter any two numbers : ");
	scanf("%f%f",&a,&b);
	
	sum=a+b;
	diff=a-b;
	product=a*b;
	div=(a/b);
	
	printf("the sum of two numbers is : %d\n",sum);
	printf("the difference of the two numbers is : %d\n",diff);
	printf("the product of two numbers is : %d\n",product);
	printf("the division of two numbers is : %0.18f",div);
}
