#include<iostream>
#include<cmath>
int main()
{
	int n;
	int cases=0;
	while(scanf("%d",&n)!=EOF,n>=0)
	{
		printf("Case %d: %0.lf\n",++cases,ceil(log(n)/log(2)));
	}
}
