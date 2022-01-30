#include<stdio.h>

main()

{
	int n,a;
	
	printf("enter the number : ");
	scanf("%d",&n);
	
	for (a=1;a<=n;a++)
	{
		if(n%a==0)
		printf("\n%d",n);
	} 
}
