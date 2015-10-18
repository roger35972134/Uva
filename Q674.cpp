#include<iostream>
using namespace std;
long long int money[7491];
int coins[5]={1,5,10,25,50};
int main()
{
	int n;
	money[0]=1;
	for(int i=0;i<5;i++)
		for(int j=coins[i];j<=7490;j++)
		{
			money[j]+=money[j-coins[i]];
		}
	while(scanf("%d",&n)!=EOF)
		printf("%d\n",money[n]);
}
