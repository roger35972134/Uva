#include<iostream>
int main()
{
	long int n,count;
	while(scanf("%ld",&n)!=EOF)
	{
		count=1;
		long int r=1,N=1;
		while(r)
		{
			if(N<n)
			{
				N=(N*10+1);
				count++;
			}
			r=N%n;
			N=r;
		}
		printf("%ld\n",count);
	}
}
