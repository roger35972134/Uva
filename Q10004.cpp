#include<iostream>
using namespace std;
int adj[200][200]={0};
bool visit[200];
int color[200]={0};
bool flag=false;
void DFS(int i,int n)
{
	if(flag==true)
		return;
	for(int j=0;j<n;j++)
	{
		if(adj[i][j]&&!visit[j])
		{
			if(color[j]==0)
				color[j]=color[i]-1;
			else if(color[j]==color[i])
				flag=true;
			visit[j]=true;
			DFS(j,n);
		}
	}
	
}
int main()
{
	for(int i=0;i<200;i++)
	{
		visit[i]=false;
	}
	int n;
	while(cin >> n,n)
	{
		int edge;
		cin >> edge;
		for(int i=0;i<edge;i++)
		{
			int a,b;
			scanf("%d%d",&a,&b);
			adj[a][b]=1,adj[b][a]=1;
		}
		flag=false;
				color[0]=1;
				DFS(0,n);
		if(!flag)
			cout << "BICOLORABLE.\n";
		else
			cout << "NOT BICOLORABLE.\n";
	}
}
