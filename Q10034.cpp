#include<iostream>
#include<cmath>
#include<string.h>


double adj[105][105];
double p[105][2];
bool visit[105];

int main()
{
	int n;
	scanf("%d",&n);
	for(int a=0;a<n;a++)
	{
		int m;
		scanf("%d",&m);
		for(int b=0;b<m;b++)//input point
		{
			scanf("%lf%lf",&p[b][0],&p[b][1]);
		}
		for(int i=0;i<m;i++)
			for(int j=0;j<m;j++)
			{
				double x1=p[i][0],x2=p[j][0],y1=p[i][1],y2=p[j][1];
				double x=abs(x1-x2),y=abs(y1-y2);
				adj[i][j]=sqrt(x*x+y*y);
			}
		memset(visit,false,sizeof(visit));
		bool flag=true;
		double ans=0;
		visit[0]=true;
		while(flag)
		{
			flag=false;
			int minx=-1,miny=-1;
			double d=100000;
			for(int i=0;i<m;i++)
			{
				if(visit[i])
				{
					for(int j=0;j<m;j++)
					{
						if(!visit[j])
						{
							if(d>adj[i][j])
							{
								d=adj[i][j];
								minx=i;
								miny=j;
							}
							flag=true;
						}
					}
				}
			}
			visit[miny]=true;
			if(flag)
				ans+=d;
		}
		if(!a)
		printf("%.2lf\n",ans);
		else
		printf("\n%.2lf\n",ans);
	}
}
