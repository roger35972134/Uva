#include<iostream>
long long int fib[51];
int main()
{
	fib[0]=1,fib[1]=1;
	for(int i=2;i<51;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	
	int n;
	while(scanf("%d",&n)!=EOF,n)
	{
		printf("%lld\n",fib[n]);
	}
} 
