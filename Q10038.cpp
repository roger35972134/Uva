#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int jolly[3000],n;
	while(scanf("%d",&n)!=EOF)
	{
		bool used[n],isjolly=true;
		for(int i=0;i<n;i++)
		{	
			cin >> jolly[i];
			used[i]=false;
		}
		for(int i=0;i<n;i++)
		{
			if(!i)
				continue;
			int s=abs(jolly[i]-jolly[i-1]);
			if(s>=n||s<1||used[s])
				{
					cout << "Not jolly\n";
					isjolly=false;
					break;					
				}
			else
				used[s]=true;
		}
		if(isjolly)
			cout << "Jolly\n";
	}
}
