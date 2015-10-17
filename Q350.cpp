#include<iostream>
#include<string.h>
bool used[10000]={false};
int main()
{
	int Count=0;
	int Z,I,M,L;
	while(scanf("%d%d%d%d",&Z,&I,&M,&L)!=EOF)
	{
		if(!Z&&!I&&!M&&!L)
		{
			break;
		}
		int count=1;
		memset(used,false,sizeof(used));
		L=(Z*L+I)%M;
		used[L]=true;
		while(true)
		{
			L=(Z*L+I)%M;
			if(used[L])
			{
				break;
			}
			else{
				count++;
				used[L]=true;
			}
		}
		printf("Case %d: %d\n",++Count,count);
	}
}
