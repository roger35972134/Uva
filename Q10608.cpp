#include<iostream>
#include<string.h>
int map[20005][20005];
bool visit[3005];
int count,point;
void dfs(int current)
{
	visit[current]=true;
	for(int i=1;i<=point;i++)
	{
		if(map[current][i])
		{
			if(!visit[i])
			{
				count++;
				dfs(i);
			}
		}
	}
	return;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int max=0;
		memset(map,0,sizeof(map));
		memset(visit,false,sizeof(visit));
		int b;
		scanf("%d%d",&point,&b);
		for(int j=0;j<b;j++)
		{
			int s,e;
			scanf("%d%d",&s,&e);
			map[s][e]=1;
			map[e][s]=1;
		}
		for(int j=1;j<=point;j++)
		{			
			if(!visit[j])
			{
				count=1;
				dfs(j);
			}
			if(count>max)
			{
				max=count;
			}
		}
		printf("%d\n",max);
	}
}
