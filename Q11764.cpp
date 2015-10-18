#include<iostream>

int main()
{
	int n,count=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int bricks[55];
		int brick;
		scanf("%d",&brick);
		for(int j=0;j<brick;j++)
			scanf("%d",&bricks[j]);
		int high=0,low=0;
	 for(int j=1;j<brick;j++)
		{
			if(bricks[j]>bricks[j-1])
				high++;
			if(bricks[j]<bricks[j-1])
				low++;
		}
		printf("Case %d: %d %d\n",count++,high,low);
	}
}
