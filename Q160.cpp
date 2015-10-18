#include<iostream>
#include<string.h>
int p[26]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int pcount[25];
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF,n)
	{
		memset(pcount,0,sizeof(pcount));
		for(int i=2;i<=n;i++)
		{
			int num=i;
			while(num!=1)
			{
				for(int j=0;j<25;j++)
				{
					if(num%p[j]==0)
					{
						pcount[j]++;
						num/=p[j];
						break;
					}
				}
			}
		}
		printf("%3d! =",n);
		int i=0;
		while(p[i]<=n&&i<25)
		{
			if(i==15)
				printf("\n%6c",32);
			printf("%3d",pcount[i]);
			
			i++;
			
		}
		printf("\n");
	}
}
