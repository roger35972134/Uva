#include<iostream>
#include<cmath>
using namespace std;
unsigned int reverse(unsigned int num)
{
	unsigned int rev=0;
	while(num>0)
	{
		rev=rev*10+num%10;
		num/=10;
	}
	return rev;
}
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		unsigned int num;
		unsigned int rev;
		cin >> num;
		rev=reverse(num);
		int count=0;
		
		while(1)
		{				
			num+=rev;
			rev=reverse(num);
			count++;
			if(num==rev)
			{
				cout << count <<" "<< num << endl;
				break;
			}
		}
	}
}
