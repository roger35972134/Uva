#include<iostream>
#include<string.h>
#define M 1000002
int num[M];
int num2[M];
int ans[M];
int main()
{
	int n,m;
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
		memset(num,0,sizeof(num));
		memset(num2,0,sizeof(num2));
		memset(ans,0,sizeof(ans));
		scanf("%d",&n);
		for(int j=1;j<=n;j++)
		{
			int add;
			scanf("%d%d",&num[j],&num2[j]);
		}
		for(int k=n,c=0;k>=0;k--)
			{
				ans[k]=(num[k]+num2[k]+c)%10;
				c=(num[k]+num2[k]+c)/10;
			}
		if(ans[0]!=0)
		{
			printf("%d",ans[0]);
		}
		for(int j=1;j<=n;j++)
			printf("%d",ans[j]);
		if(i!=m-1)
			printf("\n\n");
		else
			printf("\n");
	}
}

