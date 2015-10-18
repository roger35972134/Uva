#include<iostream>
using namespace std;
int main()
{
	int n,i,k;
	while(scanf("%d%d",&n,&k)!=EOF)
	{
		i=n;
		int s=i;
		int sum=n;
		while(s>0)
		{
			s=i/k;
			sum+=s;
			i=i/k+i%k;
		}
		cout << sum << endl;
	}
}
