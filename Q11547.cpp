#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int num;
		cin >> num;
		cout << abs(((num*567/9+7492)*235/47-498)%100/10) << endl;
	}
}
