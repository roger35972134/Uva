#include<iostream>
#include<cmath>
bool P(int n)
{
	if(n==3||n==5||n==7)
	{
		return true;
	}
	for(int i=3;i<=sqrt(n);i+=2)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int main()
{
	long long int n,i;
	while(scanf("%lld",&n)!=EOF,n)
	{
		if(n==4)
		{
			printf("1\n");
			continue; 
		}
		long long int count=0;
		for(int i=3;i<=n/2;i+=2)
		{
			if(P(i)&&P(n-i))
				count++;
		}
		printf("%lld\n",count); 
	}
}
