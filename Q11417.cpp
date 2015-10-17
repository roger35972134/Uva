#include<iostream>
using namespace std;
int num[501][501];
int GCD(int i,int j)
{
	if(i%j==0)return j;
	else return GCD(j,i%j);
}
int main()
{
	int G,N;
		for(int i=1;i<=500;i++)
		for(int j=1;j<=500;j++)
		{
	 	   num[i][j]=GCD(i,j);
		}
	while(scanf("%d",&N) && N)
	{
		G=0;
		for(int i=1;i<=N;i++)
		for(int j=i+1;j<=N;j++)
		{
			G+=num[i][j];
		}
		printf("%d\n",G);
	}
}
