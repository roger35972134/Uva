#include<iostream>
using namespace std;
int main()
{
	unsigned long int m,n,i;
	while(scanf("%lld%lld",&m,&n)!=EOF,m)
	{
		if(n>m)
			swap(n,m);
		unsigned long int max=0,num=0;
		for(i=n;i<=m;i++)
		{
			unsigned long int buf=i,count=0;
			do{
				if(buf%2)
					buf=buf*3+1;
				else
					buf/=2;
				count++;
			}while(buf!=1);
			if(count>max)
			{
				num=i;
				max=count;
			}
		}
		printf("Between %d and %d, %d generates the longest sequence of %d values.\n",n,m,num,max);
	}
}
