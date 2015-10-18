#include<iostream>
#include<cstring>
#include<string.h>

using namespace std ;
char g[26][26]={'0'};
void dfs(int i,int j)
{
	if(g[i][j]!='1')
		return;
		
		g[i][j]='2';
		dfs(i-1,j-1);
		dfs(i-1,j);
		dfs(i-1,j+1);
		dfs(i,j-1);
		dfs(i,j+1);
		dfs(i+1,j-1);
		dfs(i+1,j);
		dfs(i+1,j+1);
}
int main()
{
	int n,C=1;
	while(scanf("%d",&n)==1)
	{
		int count=0;
		memset(g,'0',sizeof(g));
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				scanf(" %c",&g[i][j]);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(g[i][j]=='1')
				{
					dfs(i,j);
					count++;
				}
			}
		}
		
		printf("Image number %d contains %d war eagles.\n",C++,count);
	}
}
