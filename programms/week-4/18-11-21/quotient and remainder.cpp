#include<stdio.h>

main()

{
   int dividend,divisor,quotient,remainder;
   
   printf("enter the value of dividend : ");
   scanf("%d",&dividend);
   
   printf("enter the value of divisor : ");
   scanf("%d",&divisor);
   
   quotient=dividend/divisor;
   remainder=dividend-(divisor*quotient);
   
   printf("quotient = %d",quotient);
   printf("\nremainder = %d",remainder);
   

}
