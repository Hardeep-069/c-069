#include<stdio.h>

main()

{
    int a,b,c,temp,e=1,d=0,f;
    
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    
    for( int i=a;i<=b;i++)
    {
        temp=i;
        f=i;
        
        while(f!=0)
        {
            c=f%10;
            for(int j=c;j>=1;j--)
            {
                e*=j;
            }
            d+=e;
            e=1;
            f=f/10;
        }
         
        if(temp==d)
        printf("%d ",temp);
         
        d=0;
    }
}
