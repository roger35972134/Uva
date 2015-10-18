#include<iostream>
#include<cstdlib>
#include<climits>
using namespace std;
int main()
{
	int num,budget,hotels,weeks;
	while(cin >> num>>budget>>hotels>>weeks)
	{
		int minprice=INT_MAX;
		for(int i=0;i<hotels;i++)
		{
			int price;
			cin >> price;
			for(int j=0;j<weeks;j++)
			{
				int stayweeks;
				cin >> stayweeks;
				if(num*price<=budget&&stayweeks>=num&&num*price<minprice)
				{
						minprice=num*price;
				}
			}
		}
		if(minprice==INT_MAX)
			cout << "stay home\n";
		else
			cout << minprice << "\n";
	}
}
