#include<iostream>
long long int a[14]={0,0,0,0,0,0,0,0,40320,362880,3628800,39916800,479001600,6227020800};
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n<0)
		{
			if(n%2==0)
			{
				printf("Underflow!\n");
			}
			else
			{
				printf("Overflow!\n");
			}
		}
		else
		{
			if(n>13)
			{
				printf("Overflow!\n");
			}
			else if(n<8)
			{
				printf("Underflow!\n");
			}
			else
			{
				printf("%lld\n",a[n]);
			}
		}
	}
}
