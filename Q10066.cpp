#include<iostream>
int main()
{
	int t1[102],t2[102],m,n,C=0;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		if(m+n==0)
			break;
		for(int i=1;i<=n;i++)
			scanf("%d",&t1[i]);
		for(int i=1;i<=m;i++)
			scanf("%d",&t2[i]);
		int LCS[102][102]={};
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
			{
				if(t1[i]==t2[j])
					LCS[i][j]=LCS[i-1][j-1]+1;
				else
					LCS[i][j]=(LCS[i-1][j]>LCS[i][j-1])?LCS[i-1][j]:LCS[i][j-1];
			}
		printf("Twin Towers #%d\n",++C);
		printf("Number of Tiles : %d\n\n",LCS[n][m]);
	}
}
