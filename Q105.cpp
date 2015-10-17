#include<iostream>
#include<string.h>
#include<climits>
using namespace std;
int main()
{
	int height[10001];
	memset(height,0,sizeof(height));
	int began,high,end,maxend=0,min=INT_MAX;
	while(scanf("%d%d%d",&began,&high,&end)!=EOF)
	{
		if(began<min)
			min=began;
		if(end>maxend)
			maxend=end;
		for(int i=began;i<end;i++)
			if(high>height[i])
				height[i]=high;
	}
	for(int i=min;i<=maxend;i++)
		if(height[i]!=height[i-1])
		{	
			if(i==maxend)
				printf("%d %d",i,height[i]);
			else
				printf("%d %d ",i,height[i]);
		}
	printf("\n");
	return 0;
}
