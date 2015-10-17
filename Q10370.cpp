#include<iostream>
using namespace std;
int main()
{
	double average,rate;
	int n,num,grade[1000],sum=0,count=0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		sum=0,count=0;
		cin >> num;
		for(int j=0;j<num;j++)
		{
			cin >> grade[j];
			sum+=grade[j];
		}
		average=(double)sum/num;
		for(int j=0;j<num;j++)
			if(grade[j]>average)
				count++;
		printf("%.3f%%\n",(double)count/num*100);
	}
}
