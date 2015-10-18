#include<iostream>
#include<string.h>
using namespace std;
bool area[100];
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF,n)
	{
		int now,count;
		
		for(int i=1;i<=n;i++)
		{
			bool flag=true;
			now=1;
			count=0;
			memset(area,false,sizeof(area));
			while(count<=n)
			{
				area[now]=true;
				if(!area[now+i])
					now+=i;
				if (area[13] == 1)
				{
					flag = false;
					break;
				}
				if(now>n)
					now-=n;
				count++;
			}
			if(flag)
			cout << i << endl;
		}
	}
	
}
