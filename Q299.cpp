#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int trains,train[50],count=0;
		cin >> trains;
		for(int j=0;j<trains;j++)
		{
			cin >> train[j];
		}
		for(int j=0;j<trains-1;j++)
			for(int k=0;k<trains-1-j;k++)
				if(train[k]>train[k+1])
				{
					int tmp=train[k];
					train[k]=train[k+1];
					train[k+1]=tmp;
					count++;
				}
		printf("Optimal train swapping takes %d swaps.\n",count);
	}
}
