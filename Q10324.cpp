#include<iostream>
#include<string.h>
using namespace std;
int a[1000001][2];
char str[1000001];

int main()
{
	int Case=0;
	while(scanf("%s",&str)!=EOF)
	{
		int len=strlen(str);
		a[0][0]=0;
		int count=0;
		for(int i=1;i<len;i++)
		{
			if(str[i]!=str[i-1])
			{
				a[count][1]=i-1;
				count++;
				a[count][0]=i;
			}
			if(i==len-1&&str[i]==str[i-1])
			{
				a[count][1]=len-1;
			}
		}
		int n;
		printf("Case %d:\n",++Case);
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			bool flag=false;
			int start,end;
			scanf("%d%d",&start,&end);
			if(start>end)
				swap(start,end);
			if(start==end)
			{
				printf("Yes\n");
				continue;
			}
			for(int i=0;i<=count;i++)
			{
				if(a[i][0]>start)
					break;
				if(a[i][0]<=start&&end<=a[i][1])
				{
					flag=true;
					break;
				}
			}
			if(flag)
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
}
