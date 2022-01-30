#include<stdio.h>
  
main()  
{  
    int a,b;
      
    printf("enter the number of rows : ");  
    scanf("%d",&a);
      
    b=a;
      
   for(int i=1;i<=a;i++)  
   {  
       for(int j=1;j<=b-1;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=i;k++)  
       {  
         printf("* ");  
       }  
       b--;  
     
      printf("\n");  
    }  
}  
