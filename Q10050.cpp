#include<iostream>
#include<string.h>
using namespace std;
bool N[3651];
int main()
{
	int h1,h2,h3,n,days;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		memset(N,false,sizeof(N));
		int count=0,party;
		scanf("%d%d",&days,&party);
		for(int k=0;k<party;k++)
		{
			int h;
			cin >> h;
			for(int j=1;j<=days;j++)
			{
				if(j%h==0&&j%7!=0&&j%7!=6&&!N[j])
				{
					count++;
					N[j]=true;
				}
			}
		}
		cout << count <<endl;
	}
}
