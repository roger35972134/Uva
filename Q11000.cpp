#include<iostream>
//Q11000 Bee
long long int M,F;
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF,n>=0)
	{
		if(n==0)
		{
			printf("0 1\n");
			continue;
		}
		F=1,M=0;
		for(int i=0;i<n;i++)
		{
			long long int tempF=F,tempM=M;
			F=tempM+1;
			M+=tempF;
		}
		printf("%lld %lld\n",M,F+M);
	}
}
