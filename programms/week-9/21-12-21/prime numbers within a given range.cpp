#include<stdio.h>

main()
{
   int a,b;
   
   printf("Enter the range : ");
   scanf("%d%d",&a,&b);
   
   for (int i=a;i<=b;i++)
   {
       int j;
       if(i%2!=0)
       {
          for(j=2;j<=i;j++)
           {
              if(i%j==0)
              break;   
           } 
       }
       if(i==j)
       printf("%d ",i);    
   } 
}
