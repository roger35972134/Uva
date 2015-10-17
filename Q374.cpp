#include<iostream>

using namespace std;
int f(int m,int n,int mod)
{
	long long int mul=m;
	long long int r=1;
	while(n)
	{
		if(n%2==1)
		{
			r*=mul;r%=mod;
		}
		mul*=mul;
		mul%=mod;
		n>>=1;
	}
	return r;
}
int main()
{
	int B,P,M;
	while(scanf("%d%d%d",&B,&P,&M)==3)
	printf("%d\n",f(B,P,M));
	return 0;
}
