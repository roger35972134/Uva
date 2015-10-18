#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long int n,s;
	while(scanf("%d",&n)==1,n!=0)
	{
		s=(int)sqrt(n);
		if(s*s==n)
		{	
			cout << "yes\n";
		}
		else
		{
			cout << "no\n";
		}
	}
	return 0;
}
