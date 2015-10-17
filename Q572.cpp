#include<iostream>
#include<string.h>
using namespace std;

char oil[102][102];
bool visit[102][102];

int DFS(int x,int y)
{
	if(!visit[x][y])
	{
		visit[x][y]=true;
		if(oil[x-1][y-1]=='@')
			DFS(x-1,y-1);
		if(oil[x-1][y]=='@')
			DFS(x-1,y);
		if(oil[x-1][y+1]=='@')
			DFS(x-1,y+1);
		if(oil[x][y-1]=='@')
			DFS(x,y-1);
		if(oil[x][y]=='@')
			DFS(x,y);
		if(oil[x][y+1]=='@')
			DFS(x,y+1);
		if(oil[x+1][y-1]=='@')
			DFS(x+1,y-1);
		if(oil[x+1][y]=='@')
			DFS(x+1,y);
		if(oil[x+1][y+1]=='@')
			DFS(x+1,y+1);
	}
}
int main()
{
	int x,y;
	char string[100];
	while(scanf("%d%d",&x,&y)!=EOF&&x&&y)
	{
		int count=0;
		memset(visit,false,sizeof(visit));
		/*for(int i=1;i<=x;i++)
			for(int j=1;j<=y;j++)
				scanf("%c",&oil[i][j]);*/
		for(int i=0;i<x;i++)
		{
			cin>>string;
			for(int j=0;j<y;j++)
			{
				oil[i][j]=string[j];
			}
		}
		for(int i=0;i<x;i++)
			for(int j=0;j<y;j++)
				if(!visit[i][j]&&oil[i][j]=='@')
				{
					count++;	
					DFS(i,j);
				}
		printf("%d\n",count);
	}
}
