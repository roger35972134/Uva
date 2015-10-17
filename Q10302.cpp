#include<iostream>
int main()
{
	long long int sum,n;
	while(scanf("%lld",&n)!=EOF)
	{
		long long int sum=n*(n+1)/2;
		printf("%lld\n",sum*sum);
	}
}
