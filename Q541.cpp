#include<iostream>
int array[101][101];
int main()
{
	int n;
	
	while(scanf("%d",&n)!=EOF,n)
	{
		int sum1=0,sum2=0,point1,point2,count1=0,count2=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%d",&array[j][i]);
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				sum1+=array[j][i];
			}
			if(sum1%2==1)
			{
				count1++;
				point1=i;
				sum1=0;
			}
		}
		for(int j=0;j<n;j++)
		{
			for(int i=0;i<n;i++)
			{
				sum2+=array[j][i];
			}
			if(sum2%2==1)
			{
				count2++;
				point2=j;
				sum2=0;
			}
		}
		if(count1==0&&count2==0)
			printf("OK\n");
		else if(count1==1&&count2==1)
			printf("Change bit (%d,%d)\n",point1+1,point2+1);
		else
			printf("Corrupt\n");
	}
	
}
