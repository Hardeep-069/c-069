#include<stdio.h>

main()

{
	int a,b;
	
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	
	for(int i=a;i<=b;i++)
	{ int temp=i,c=0;
	    for(int j=1;j<i;j++)
		{
            if(i%j==0)
		    c+=j;   
	    }
	   		      
	  if(c==temp)
	  printf("%d ",temp);
	} 
}
