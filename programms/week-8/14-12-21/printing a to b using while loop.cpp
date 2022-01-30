#include<stdio.h>

main()

{   int x,y;

    printf("x = ");
    scanf("%d",&x);
    
    printf("y = ");
    scanf("%d",&y);

	int a=x;
	while(a<=y)
	{
		printf("\n%d",a);
		a++;
	}
}