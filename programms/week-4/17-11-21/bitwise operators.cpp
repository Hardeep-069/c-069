#include<stdio.h>

main()

{
  int a,b;
  printf("enter value of a :  \n");
  scanf("%d",&a);
  printf("\nenter value of b : ");
  scanf("%d",&b);
  
  printf("a<<b = %d",a<<b);
  printf("\na>>b = %d",a>>b);
  printf("\na&b = %d",a&b);
  printf("\na|b = %d",a|b);
  printf("\na^b = %d",a^b);
}
