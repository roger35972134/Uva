#include<iostream>
using namespace std;
int main()
{
	int n,sum,m,big,small;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		bool flag=true;
		scanf("%d%d",&sum,&m);
		if(sum<m)flag=false;
		else if((sum+m)%2==1)flag=false;
		else
			big=(sum+m)/2,small=(sum-m)/2;
		if(!flag)
			cout << "impossible\n";
		else
			printf("%d %d\n",big,small);
	}
}
