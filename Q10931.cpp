#include<iostream>
int n,t;
int D(int n)
{
	if(n)
	{
		D(n/2);
		printf("%d",n&1),t+=n&1;
	}
}
int main()
{
	while(scanf("%d",&n)!=EOF,n)
	{
		printf("The parity of ");
		t=0,D(n);
		printf(" is %d (mod 2).\n",t);
	}
}
