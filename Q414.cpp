#include<iostream>
#include<climits> 
int main()
{
	char str[13][26];
	char shit[10];
	int n,sum=0,min=25;
	while(scanf("%d",&n)!=EOF,n)
	{
		gets(shit);
		for(int i=0;i<n;i++)
		{
			gets(str[i]);
		}
		sum=0,min=25;
		for(int i=0;i<n;i++)
		{
			int buf=0;
			for(int j=0;j<25;j++)
			{
				if(str[i][j]==' ')
				{
					sum++;
					buf++;	
				}
			}
			if(buf<min)
				min=buf;
		}
		printf("%d\n",sum-n*min);
	}
}
