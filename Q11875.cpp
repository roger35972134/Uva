#include<iostream>
int age[12];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int m;
		scanf("%d",&m);
		for(int j=1;j<=m;j++)
		{
			scanf("%d",&age[j]);
		}
		printf("Case %d: %d\n",i,age[m/2+1]);
	}
}
