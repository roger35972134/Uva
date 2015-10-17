#include <iostream>
 
using namespace std;
 
int main()
{
	long long int n,last,sum;
	while(scanf("%lld",&n)!=EOF)
	{
		last=((n-1)*(n-1)/4+n)*2-1;
		sum=last*3-6;
		printf("%lld\n",sum);
	}
}
