#include<iostream>
#include<string.h>
char str1[101][101];
int main()
{
	int count=0;
	int len[100],maxlen=0;
	while(gets(str1[count])!=NULL)
	{
		len[count]=strlen(str1[count]);
		if(len[count]>maxlen)
			maxlen=len[count];
		count++;
	}
	for(int i=0;i<maxlen;i++)
	{
		for(int j=count-1;j>=0;j--)
		{
			if(i<len[j])
				printf("%c",str1[j][i]);
			else if(j!=0)
				printf(" ");
		}
		printf("\n"); 
	}
}
