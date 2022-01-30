#include<stdio.h>

main()

{
	int a,b;
	
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	
	printf("the size of the number is %d bytes",sizeof(a));
	printf("\nthe size of the number is %d bytes",sizeof(b));

	if(a==2)
	printf("int");
	else
	printf("float");

}
