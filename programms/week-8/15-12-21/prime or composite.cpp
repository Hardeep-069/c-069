#include<stdio.h>

int pc (int a)
{
    int d=1,n;
    
    if (a==2)
    return (1);
    
    else if (a>2)
    {
        if(a%2==0)
        return (0);
         
        else
        {
         for(n=2;n<=a;n++)
         {
          d = a%n; 
          
          if (d==0)
          break;
         }
        }
     if (d==0 && a==n)
     return 1;
      
     else if (d==0 && a!=n)
     return 0;   
}

int main()
{
    int a,r;

    scanf("%d",&a);
    
    r=pc(a);
    
    if(r==1)
    printf("prime");
    
    else
    printf("not prime");
    
    return 0;
}
