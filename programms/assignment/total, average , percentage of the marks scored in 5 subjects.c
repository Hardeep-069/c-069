#include<stdio.h>

main()

{
	float a,b,c,d,f;
	
	printf("please enter the marks scored out of hundred");
	
	printf("\nenter the marks scored in subject-1 : ");
	scanf("%f",&a);
	printf("enter the marks scored in subject-2 : ");
	scanf("%f",&b);
	printf("enter the marks scored in subject-3 : ");
	scanf("%f",&c);
	printf("enter the marks scored in subject-4 : ");
	scanf("%f",&d);
	printf("enter the marks scored in subject-5 : ");
	scanf("%f",&f);
	
	printf("\ntotal      = %.2f/500",a+b+c+d+f);
	printf("\naverage    = %.2f",(a+b+c+d+f)/5);
	printf("\npercentage = %.2fpercent",(a+b+c+d+f)/5);
}
