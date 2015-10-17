#include<iostream>
using namespace std;
int main()
{
	bool flag=false;
	int n,sum,moves,Count=0;
	int bricks[100];
	while(scanf("%d",&n),n)
	{
		sum=0,moves=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&bricks[i]);
			sum+=bricks[i];
		}
		sum/=n;
		for(int i=0;i<n;i++)
		{
			if(bricks[i]>sum)
			{
				moves+=bricks[i]-sum;
			}
		}
		//if(flag)
		//	printf("\n");
		flag=true;
		printf("Set #%d\nThe minimum number of moves is %d.\n\n",++Count,moves);
	}
}
