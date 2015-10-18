#include<iostream>
int k,num[12],ans[6];

void dfs(int depth,int n)
{
	int i;
	if(depth>=6)
	{
		printf("%d",ans[0]);
		for(int i=1;i<6;i++)
			printf(" %d",ans[i]);
		puts("");
		return;
	}
	for(int i=n;i<k;i++)
	{
		ans[depth]=num[i];
		dfs(depth+1,i+1);
	}
}
int main()
{
	int i;
	bool flag=false;
	while(scanf("%d",&k)!=EOF,k)
	{
		if(flag)
			printf("\n");
		flag=true;
		for(i=0;i<k;i++)
			scanf("%d",&num[i]);
		dfs(0,0);
	}
}
