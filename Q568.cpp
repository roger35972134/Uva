#include<iostream>
int main()
{
	int n;
	long long int temp=1;
	while(scanf("%d",&n)!=EOF)
	{
		temp=1;
		for(int i=1;i<=n;i++)
		{
			temp*=i;
			while(temp%10==0)
			{
				temp=temp/10;
			}
			if((i+1)%5!=0)
				temp%=10000;
		}
		printf("%5d -> %d\n",n,temp%10);
	}
}
