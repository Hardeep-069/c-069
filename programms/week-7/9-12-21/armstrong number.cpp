#include<stdio.h> 
#include<math.h> 

main() 
   
{    
int a,b,n=0,remainder,sum=0,temp;
    
printf("enter a number : ");
scanf("%d",&a);

temp=a;

while (temp != 0)
{
 temp /= 10;
 n += 1; 
}

temp=a;

while(a != 0)    
{    
remainder = a%10;    
sum = sum + pow(remainder,n);    
a /= 10;    
}
    
if(temp==sum)    
printf("armstrong  number "); 
   
else    
printf("not armstrong number");      
}  
