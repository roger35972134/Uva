#include<iostream>
#include<string.h>
int voc[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
char str[105];
int main()
{
	int n;
	scanf("%d",&n);
	char x[10];
	gets(x);
	for(int i=1;i<=n;i++)
	{
		int sum=0;
		gets(str);
		for(int j=0;j<strlen(str);j++)
		{
			if(str[j]==' ')
				sum++;
			else
			{
				int s=str[j]-'a';
				sum+=voc[s];
			}
		}
		printf("Case #%d: %d\n",i,sum);
	}
}
