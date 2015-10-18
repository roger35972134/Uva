#include<iostream>
using namespace std;
int main()
{
	unsigned long int num1,num2,result;
	while(cin >> num1 >> num2)
	{
		result = num1 ^ num2;
		cout << result << endl;
	}
	return 0;
}
