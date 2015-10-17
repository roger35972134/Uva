#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char answer[n];
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin >> a >> b;
		if(a>b)
			cout << ">\n";
		else if(a<b)
			cout << "<\n";
		else
			cout << "=\n";
	}
	return 0;
}
