#include<iostream>
#include<string.h>
int f[10];

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF,n)
	{
		int num[782]={0};
		num[0]=1;
		for(int i=1;i<=n;i++)
		{
			memset(f,0,sizeof(f));
			for(int j=0;j<782;j++)
			{
				num[j]*=i;
			}
			for(int j=0;j<782;j++)
			{
				if(num[j]>=10)
				{
					num[j+1]+=num[j]/10;
					num[j]=num[j]%10;
				}
			}
			bool flag=false;
			for(int j=781;j>=0;j--)
			{
				if(num[j]!=0)
				flag=true;
				if(flag)
					f[num[j]]++;
			}
		}
		printf("%d! --\n",n);
		for(int i=0;i<10;i++)
		{
			if(i!=9&&i!=4)
				printf("(%d)  %d  ",i,f[i]);
			else
				printf("(%d)  %d\n",i,f[i]);
		}
	} 
}
