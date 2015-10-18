#include<iostream>
int F(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return F(n-1)+F(n-2);
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		printf("%d\n",F(n));
	}
}
