#include<iostream>
#include<string.h>
int main()
{
	int n,a[20],i;
	while(scanf("%d",&n)!=EOF,n>=0)
	{
		if(!n)
		{
			printf("0\n");
		}
		else
		{
			memset(a,0,sizeof(a));
			for(i=0;n>0;i++)
			{
				a[i]=n%3;
				n/=3;
			}
			for(i--;i>=0;i--)
				printf("%d",a[i]);
			printf("\n");
		}
	}
}
