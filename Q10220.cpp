#include<iostream>
#include<string.h>
int num[2601];
int count[1001];
int main()
{
	count[0]=count[1]=1;
	memset(num,0,sizeof(num));
	num[0]=1;
	for(int i=2;i<=1000;i++)
	{
		for(int j=0;j<2601;j++)
		{
			num[j]*=i;
		}
		for(int j=0;j<2601;j++)
			if(num[j]>=10)
			{
				num[j+1]=num[j+1]+num[j]/10;
				num[j]=num[j]%10;
			}
		for(int j=0;j<2601;j++)
		{
			count[i]+=num[j];
		}
	}
	int n;
	while(scanf("%d",&n))
	{
		printf("%d\n",count[n]);
	}
}
