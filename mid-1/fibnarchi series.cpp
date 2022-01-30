#include<stdio.h>

main() 

{
	int n1=1,n2=1,n3,n,i;
    
    printf("n = ");
    scanf("%d",&n);
    
	printf("%d",n1);
	printf("\n%d",n2);
	
	for (i=1;i<=n;i++)
    {
	  n3=n1+n2;
	  n1=n2;
	  n2=n3;
	  
	  printf("\n%d",n3);
    }
  
}