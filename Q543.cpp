#include<iostream>
#include<cmath>
using namespace std;
bool line[1000001]={false};
int main()
{
	int n;
	for(int i=3;i<1000001;i++)
	{
		if(!line[i])
		{
			for(int j=3;i*j<=1000000;j+=2)
				line[i*j]=true;
		}
	}
	while(scanf("%d",&n)&&n)
	{
		for(int i=3;i<n;i+=2)
		{
			if(!line[i]&&!line[n-i])
			{
				printf("%d = %d + %d\n",n,i,n-i);
				break;
			}
		}
	}
}
