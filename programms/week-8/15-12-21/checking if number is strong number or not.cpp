#include <stdio.h>

 int main() 

{
    int n,d=0,remainder,temp;
    
    printf("enter the number : ");
    scanf("%d",&n);
    
    temp=n;
    
    while (n != 0) 
    {
      int c=1;
        remainder = n % 10;
        for (int b=remainder;b>1;b--)
        {
            c *= b; 
        }
        d += c;  
        n /= 10;
        c=0;
    }
    
    if(temp==d)
    printf("strong number");
    
    else
    printf("not a strong number");
    
    return 0;
}
