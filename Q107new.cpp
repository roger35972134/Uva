#include<iostream>
#include<cmath>
int main()
{
	long int start,end,unwork,height,n,k,i,j,flag;
	
	while(scanf("%ld%ld",&start,&end)!=EOF,start&&end)
	{
		unwork=0,height=0,flag=0;
		if(start==1&&end==1)
			printf("0 1\n");
		else
		{
			for(n=1;;n++)
			{
				for(k=1;(long int)pow(n+1,k)<=start;k++)
				{
					if((long int)(pow(n+1,k)-start)==0&&(long int)(pow(n,k)-end)==0)
					{
						flag=1;
						break;
					}
				}
				if(flag) break;
			}
			for(i=0,j=1;i<=k-1;i++)
			{
				unwork+=j;
				j*=n;
			}
			for(j=1;start>=1;start/=(n+1))
			{
				height+=j*start;
				j*=n;
			}
			printf("%ld %ld\n",unwork,height);
		}
	}
}
