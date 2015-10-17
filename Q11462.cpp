#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
	int n;
	int people[102]={0};
	
	while(scanf("%d",&n)!=EOF,n)
	{
		bool flag=false;
		memset(people,0,sizeof(people));
		for(int i=0;i<n;i++)
		{
			int buf;
			scanf("%d",&buf);
			people[buf]++;
		}
		for(int i=1;i<=100;i++)
		{
			for(int j=0;j<people[i];j++)
			{	
				if(flag) printf(" ");
				flag=true;
				printf("%d",i);
			}
		}
		printf("\n");
	}
}
