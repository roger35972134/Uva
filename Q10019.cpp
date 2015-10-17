#include<iostream>
#include<cmath>
int DB(int n)
{
	int sum=0;
	while(n)
	{
		sum+=n%2;
		n/=2;
	}
	return sum;
}
int DH(int n)
{
	int sum=0,i=0;
	while(n)
	{
		int k=n%10*pow(16,i);
		n/=10;
		i++;
		while(k)
		{
			sum+=k%2;
			k/=2;
		}
	}
	return sum;
}
int main()
{
	int n,num;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num);
		printf("%d %d\n",DB(num),DH(num));
	}
	return 0;
}
