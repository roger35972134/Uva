#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n,s[550];
	
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int num;
		cin >> num;
		for(int j=0;j<num;j++)
		{
			cin >> s[j];
		}
		sort(s,s+num);
		int sum=0;
		int mid=s[num/2];
		for(int j=0;j<num;j++)
		{
				sum+=abs(s[j]-mid);
		}
		cout << sum << "\n";
	}
	
}
