#include<stdio.h>

main()

{
	int n,d=0;
	
	printf("n=");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		int b,c=1;
		b=i;
		for(int j=b;j>=1;j--)
		{
			c*=j;
		}
		d+=c;
	}
	printf("answer = %d",d);
}