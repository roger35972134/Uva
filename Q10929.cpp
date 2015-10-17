#include<iostream>
#include<string.h>
#include<stdio.h>
int main()
{
	char str[1005]={};
	while(scanf("%s",&str)!=EOF)
	{
		if(!atoi(str))
			break;
		int len=strlen(str);
		int n1=0,n2=0;
		for(int i=0;i<len;i++)
		{
			if(i%2==0)
				n2+=str[i]-48;
			else
				n1+=str[i]-48;
		}
		if(abs(n1-n2)%11==0)
			printf("%s is a multiple of 11.\n",str);
		else
			printf("%s is not a multiple of 11.\n",str);
		
	}
}
