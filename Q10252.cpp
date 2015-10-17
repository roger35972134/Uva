#include<iostream>
#include<string.h>
int str1[27],str2[27];
int main()
{
	char string[1005];
	while(gets(string)!=NULL)
	{
		memset(str1,0,sizeof(str1));
		memset(str2,0,sizeof(str2));
		for(int i=0;i<strlen(string);i++)
		{
			if(string[i]>=97&&string[i]<=122)
			{
				str1[string[i]-97]++;
			}
		}
		gets(string);
		for(int i=0;i<strlen(string);i++)
		{
			if(string[i]>=97&&string[i]<=122)
			{
				str2[string[i]-97]++;
			}
		}
		for(int i=0;i<26;i++)
		{
			if(str1[i]!=0&&str2[i]!=0)
			{
				if(str1[i]<=str2[i])
				{
					for(int j=0;j<str1[i];j++)
						printf("%c",i+97);
				}
				else
				{
					for(int j=0;j<str2[i];j++)
						printf("%c",i+97);
				}
			}
		}
		printf("\n");
	}
}
