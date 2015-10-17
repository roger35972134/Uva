#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char buffer[128];
	int count[128]={0};
	int max=0;
	while(gets(buffer))
	{
		max=0;
		memset(count,0,sizeof(count));
		int len=strlen(buffer);
		for(int i=0;i<len;i++)
		{
			if(isalpha(buffer[i]))
			count[buffer[i]]++;
			if(count[buffer[i]]>max)
			{
				max=count[buffer[i]];
			}
		}
		for(int i=0;i<128;i++)
		{
			if(count[i]==max&&count)
				printf("%c",i);
		}
		printf(" %d\n",max);
	}
}
