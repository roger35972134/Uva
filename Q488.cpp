#include<iostream>
using namespace std;
int main()
{
	int n,h,num;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&h,&num);
		for(int j=0;j<num;j++)
		{
			for(int k=1;k<=h;k++)
			{
				for(int l=1;l<=k;l++)
					cout << k;
				cout << endl;
			}
			for(int k=h-1;k>=1;k--)
			{
				for(int l=1;l<=k;l++)
					cout << k;
				cout << endl;
			}
			if(!(j==num-1&&i==n-1))
				cout << endl;
		}
	}
}
