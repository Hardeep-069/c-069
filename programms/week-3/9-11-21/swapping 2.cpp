#include<stdio.h>

main()

{
	int a,b,c;
	
      printf("enter a number for a : ");
      scanf("%d",&a);
      
      printf("enter a value for b : ");
      scanf("%d",&b);
	
	c=a+b;
	a=c-a;
	b=c-b;
	
      printf("the value of a is %d",a);
	printf("\nthe value of b is %d",b);
}      
