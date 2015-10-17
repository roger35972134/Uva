#include<iostream>
using namespace std;
void sort(int num1,int num2,int num3)
{
	int sorting[3];
	sorting[0]=num1;
	sorting[1]=num2;
	sorting[2]=num3;
	for(int i=0;i<3-1;i++)
		for(int j=0;j<3-i-1;j++)
			if(sorting[j]>sorting[j+1])
			{
				int tmp;
				tmp=sorting[j];
				sorting[j]=sorting[j+1];
				sorting[j+1]=tmp;
			}
	cout << sorting[1] << "\n";
}
int main()
{
	int n,count=1;
	while(cin >> n)
	for(int i=0;i<n;i++)
	{
		int num1,num2,num3;
		cin >>num1>>num2>>num3;
		cout << "Case " << count << ": ";
		sort(num1,num2,num3);
		count++;
	}
}
