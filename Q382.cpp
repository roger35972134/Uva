#include<iostream>
using namespace std;
int main()
{
	int n;
	printf("PERFECTION OUTPUT\n");
	while(scanf("%d",&n),n)
	{
		int sum=0;
		for(int i=1;i<n;i++)
		{
			if(n%i==0)
			{
				sum+=i;
			}
		}
		if(sum==n)
			printf("%5ld  PERFECT\n",n);
		else if(sum>n)
			printf("%5ld  ABUNDANT\n",n);
		else
			printf("%5ld  DEFICIENT\n",n);
	}
	printf("END OF OUTPUT\n");
}
