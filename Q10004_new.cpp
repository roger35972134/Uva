#include<iostream>
#include<string.h>
int adj[210][210];
int color[210];
int m;
int main()
{
	int check,n,k,i,j;
	while(scanf("%d",&m),m)
	{
		check=0;
		memset(adj,0,sizeof(adj));
		memset(color,0,sizeof(color));
		color[0]=1;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&k,&j);
			adj[k][j]=1;
			adj[j][k]=1;
		}
		for(i=0;i<m;i++)
			for(j=0;j<m;j++)
				if(!color[j]&&adj[i][j]&&color[i]) color[j]=-color[i];
		for(i=0;i<m;i++)
			for(j=0;j<m;j++)
				if(adj[i][j]&&color[i]==color[j])
					{
						check=1;
						break;
					}
		if(!check) printf("BICOLORABLE.\n");
		else printf("NOT BICOLORABLE.\n");
	}
}
