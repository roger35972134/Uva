#include<iostream>
main()
{
	int n,L,cut[52]={0};
	while(scanf("%d",&L)!=EOF,L)
	{
		scanf("%d",&n);
		int DP[52][52]={},a,b,c,d;
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&cut[i]);
		}
		cut[++n]=L;
		for(a=2;a<=n;a++)
		{
			for(b=0,c=a+b;c<=n;b++,c++)
			{
				int min=2147483647,t;
				for(d=b+1;d<c;d++)
				{
					t=DP[b][d]+DP[d][c]+cut[c]-cut[b];
					if(min>t) min=t;
				}
				DP[b][c]=min;
			}
		}
		printf("The minimum cutting is %d.\n",DP[0][n]);
	}
}
