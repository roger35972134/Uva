#include<iostream>
#include<string.h>
char country[3000][100];
int count[3000]={0};
int main()
{
	int n,countrys=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		char buf[100],str[100];
		scanf("%s",&str);
		int k=0;
		while(str[k]!=' ')
		{
			buf[k]=str[k];
			k++;
		}
		for(int j=0;j<n;j++)
		{
			if(!strcmp(buf,country[j]))
				count[j]++;
			else if(j==countrys-1)
			{
				countrys++;
				sprintf(country[countrys-1], "%s", buf); 
				count[countrys-1]++;
			}
		}
	}
	for(int i=0;i<countrys;i++)
	{
		printf("%s %d",country[i],count[i]);
	}
}
