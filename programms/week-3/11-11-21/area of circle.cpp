#include<stdio.h>
#include<math.h>
#define PI 3.14159265359

main()

{
	int r;
	float area;
	
	printf("enter the radius of circle : ");
	scanf("%d",&r);
	
	area=PI*(pow(r,2));
	
	printf("area = %f",area);
	
}
