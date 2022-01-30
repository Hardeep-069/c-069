#include<stdio.h>

main()

{
	char a;
	
	printf("enter any alphabet : ");
	scanf("%c",&a);
	
	if (a>=97)
	printf("the uppercase character is %c",a-32);
	
	else if (a>=65 && a<97)
	printf("the lowercase character is %c",a+32);
	
}
