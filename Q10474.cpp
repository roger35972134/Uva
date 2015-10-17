#include<iostream>
int a[10005];
using namespace std;
int main()
{
	int n,m,cases=0;
	while(scanf("%d%d",&n,&m)!=EOF,n)
	{
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(int i=0;i<n-1;i++)
			for(int j=0;j<n-i-1;j++)
			{
				if(a[j]>a[j+1])
					swap(a[j],a[j+1]);
			}
		printf("CASE# %d:\n",++cases);
		bool flag=false;
		int p;
		for(int i=0;i<m;i++)
		{
			flag=false;
			scanf("%d",&p);
			for(int j=0;j<n;j++)
			{
				if(p==a[j])
				{
					printf("%d found at %d\n",p,j+1);
					flag=true;
					break;
				}
				else if(p<a[j])
					break;
			}
			if(!flag) printf("%d not found\n",p);
		}
	}
}
