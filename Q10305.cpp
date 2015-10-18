#include<iostream>
#include<string.h>
int top[101][101]={0};
int ref[101]={0};
bool visit[101]={false};
int main()
{
	int p,b;
	while(scanf("%d%d",&p,&b)!=EOF,p)
	{
		memset(top,0,sizeof(top));
		memset(ref,0,sizeof(ref));
		int m,n;
		for(int i=0;i<b;i++)
		{
			scanf("%d%d",&m,&n);
			top[m][n]=1;
			ref[n]++;
		}
		int flag=1;int s;
		for(int i=1;i<=p;i++)
		{
			s=1;
			while(s<=p&&ref[s]!=0)
				s++;
			ref[s]=-1;
			if(flag)
			{
				printf("%d",s);
				flag=0;
			}
			else
			{
				printf(" %d",s);
			}
			for(int j=1;j<=n;j++)
				if(top[s][j])
					ref[j]--;
		}
		printf("\n");
	}
}
