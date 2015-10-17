#include<iostream>
using namespace std;
int a[100000];
int sorting(int n)
{
	for(int i=0;i<n-1;i++)//小的塞到後面 
				for(int j=0;j<n-1-i;j++)
			{
				if(a[j]<a[j+1])
				{
					swap(a[j],a[j+1]);
				}
			}
}
int main()
{
	int n;
	while(scanf("%d",&n),n)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sorting(n);
		n--;
		int sum=0;
		while(n)
		{
			a[n-1]=a[n]+a[n-1];
			sum+=a[n-1];
			a[n]=0;
			sorting(n);
			n--;
		}
		printf("%d\n",sum);
	}
}
