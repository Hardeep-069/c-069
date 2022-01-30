#include<stdio.h>

main()

{
	int a;
	
	printf("enter a year : ");
	scanf("%d",&a);
	
	if(a%4==0)
	printf("its a leap year");
	
	else
	printf("its not a leap year");	
	
	
}