#include<stdio.h> 
#include<math.h> 

main() 
   
{    
int a,c;
    
printf("a=");
scanf("%d",&a);
printf("c=");
scanf("%d",&c);

for(int i=a;i<=c;i++)
{
  int temp=i,c=i,d=i,n=0,b,remainder,sum=0;

  while(c!=0)  
  {
    c/=10;
    n += 1; 
  }
  
  while(d!=0)    
  {    
    remainder = d%10;    
    sum=sum+pow(remainder,n);    
    d/=10;    
  }
    
  if(temp==sum)    
  printf("%d ",temp);    
} 
}
