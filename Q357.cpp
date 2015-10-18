#include<iostream>
int coin[5]={1,5,10,25,50};
long long int buf[300001]={0};
int main()
{
	buf[0]=1;
	for(int i=0;i<5;i++)
		for(int j=coin[i];j<30001;j++)
		{
			buf[j]+=buf[j-coin[i]];
		}
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(buf[n]==1)
		{
			printf("There is only 1 way to produce %d cents change.\n",n);
		}
		else
		{
			printf("There are %lld ways to produce %d cents change.\n",buf[n],n);
		}
	}
	
}
