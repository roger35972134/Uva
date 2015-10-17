#include<iostream>
using namespace std;
int main()
{
	long long int a,b;
	while(scanf("%lld%lld",&a,&b)!=EOF)
	{
		if(b>=a)
		printf("%lld\n",b-a);
		else
		printf("%lld\n",a-b);
	}
}
