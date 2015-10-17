#include<iostream>
using namespace std;
int main()
{
	int n,point;
	while(1)
	{
		cin >> n;
		if(n==0)
			break;
		int px,py;
		cin >> px >> py;
		for(int i=0;i<n;i++)
		{
			int x,y;
			cin >> x >> y;
				if(x==px||y==py)
					cout << "divisa\n";
				else if(x<px)
				{
					if(y>py)
						cout << "NO\n";
					else
						cout << "SO\n";
				}
				else
				{
					if(y>py)
						cout << "NE\n";
					else
						cout << "SE\n";
				}
		}
	}
	return 0;
}
