#include<iostream>
#include<string.h>
#define M 8
int value[M*M+1];
int dir[8]={-9,-8,-7,-1,+1,+7,+8,+9};
int max=0,sum=0;
int visit[M*M+1];
int last;
void dfs(int i)
{
	if(i>=7)
	{
		if(max<sum)
			max=sum;
		return;
	}
	for(int a=0;a<64;a++)
	{
		if(!visit[a])
		{
			sum+=value[a];
			last=a;
			for(int b=0;b<8;b++)
			{
				int k=a;
				int g=7;
				while(g--)
				{
					visit[k]++;
					k+=dir[b];
				}
			}
		}
		dfs(i+1);
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	for(int a=0;a<n;a++)
	{
		for(int i=0;i<64;i++)
		{
			scanf("%d",&value[i]);
		}
		
		dfs(0);
		printf("%5d\n",max);
		max=0;
	}
}


