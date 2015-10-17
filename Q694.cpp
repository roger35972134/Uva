#include<iostream>
using namespace std;
int main()
{
	long long int A,L;
	int count,Case=1;
	while(scanf("%lld%lld",&A,&L)==2&&(A>0||L>0))
	{
		count=1;
		long long int a=A;
		while(a!=1)
		{
			if(a%2==0)
			{
				a/=2;
			}
			else
			{
				a=3*a+1;
			}
			if(a>L)
				break;
			count++;
		}
		printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n",Case++,A,L,count);
	}
}
