#include<stdio.h>

main() 

{
	int rows,n1=1,n2=1,n3,n;
    
    printf("enter the rows = ");
    scanf("%d",&rows);
    
	for(int i=1;i<=rows;i++)
    {
      if(i==1)
      printf("%d\n",n1);
      
      else if(i==2)
      {
         printf("%d",n1);
         printf("%d\n",n2);
      }
      
      else if(i>2)
	  {
	     printf("%d",n1);
         printf("%d",n2);
         
         for (int j=3;j<=i;j++)
	     {
             n3=n1+n2;
	         n1=n2;
	         n2=n3;
	        
	         printf("%d",n3);   
         } 
         printf("\n");
         n1=n2=1;  
      }
    }
  
}
