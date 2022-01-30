#include<stdio.h>

main()

{
    int a,b,j;
    
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    
    for(int i=a;i<=b;i++)
    {
        int temp=i,c;
        if(i==2)
        printf("2 ");
        
        if(i%2!=0)
        {
           for(j=3;j<=i;j++)
           {
              c=i%j;
              
              if(c==0)
              break;
           }
           
             if(j==temp)
              printf("%d ",temp);  
        }
    }
}
