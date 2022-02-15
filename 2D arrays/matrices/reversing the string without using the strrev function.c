#include<stdio.h>
#include<string.h>

main()
{
	int i=0,count=-1;
	char sentence[20];
	
	printf("enter a sentence : ");
	gets(sentence);
	
	while(sentence[i]!='\0')
	{
		count++;
		i++;
	}
	
	for(int j=count;j>=0;j--)
	printf("%c",sentence[j]);
}