#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int answer[n][4];
	int time[n][4];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			time[i][j]=0;
	}
	string str;
	for(int i=0;i<n;i++)
	{
	cin >> str;
	time[i][0]=(int)str[0]-48;
	time[i][1]=(int)str[1]-48;
	time[i][2]=(int)str[3]-48;
	time[i][3]=(int)str[4]-48;
	if(time[i][0]==0&&time[i][1]==0)
	{
		if(time[i][2]==0)
		{
			if(time[i][3]==9)
			{
				answer[i][0]=0;
				answer[i][1]=0;
				answer[i][2]=1;
				answer[i][3]=1;
				cout << answer[i][0] <<answer[i][1]<<":"<<answer[i][2]<<answer[i][3]<<"\n";
			}
			else{
			answer[i][0]=0;
			answer[i][1]=0;
			answer[i][2]=0;
			answer[i][3]=time[i][3]+1;
			cout << answer[i][0] <<answer[i][1]<<":"<<answer[i][2]<<answer[i][3]<<"\n";
			}
		}
		else if(time[i][2]==5)
			{
				if(time[i][3]>5)
				{
					answer[i][0]=0;
					answer[i][1]=1;
					answer[i][2]=0;
					answer[i][3]=1;
					cout << answer[i][0] <<answer[i][1]<<":"<<answer[i][2]<<answer[i][3]<<"\n";
				}
				else
				{
					answer[i][0]=0;
					answer[i][1]=0;
					answer[i][2]=5;
					answer[i][3]=5;
					cout << answer[i][0] <<answer[i][1]<<":"<<answer[i][2]<<answer[i][3]<<"\n";
				}
			}
		else
			{
				if(time[i][3]>=time[i][2])
				{
					answer[i][0]=0;
					answer[i][1]=0;
					answer[i][2]=time[i][2]+1;
					answer[i][3]=answer[i][2];
					cout << answer[i][0] <<answer[i][1]<<":"<<answer[i][2]<<answer[i][3]<<"\n";
				}
				else{
					answer[i][0]=0;
					answer[i][1]=0;
					answer[i][2]=time[i][2];
					answer[i][3]=answer[i][2];
					cout << answer[i][0] <<answer[i][1]<<":"<<answer[i][2]<<answer[i][3]<<"\n";
				}
			}
	}
	else if(time[i][0]==0)
	{
		if(time[i][2]!=5&&time[i][3]<time[i][1])
		{
			answer[i][0]=0;
			answer[i][1]=time[i][1];
			answer[i][2]=time[i][2];
			answer[i][3]=time[i][1];
			cout << answer[i][0] <<answer[i][1]<<":"<<answer[i][2]<<answer[i][3]<<"\n";
		}
		else if(time[i][2]!=5)
		{
			answer[i][0]=0;
			answer[i][1]=time[i][1];
			answer[i][2]=time[i][2]+1;
			answer[i][3]=time[i][1];
			cout << answer[i][0] <<answer[i][1]<<":"<<answer[i][2]<<answer[i][3]<<"\n";
		}
		else if(time[i][2]==5&&time[i][1]==9)
		{
			answer[i][0]=1;
			answer[i][1]=0;
			answer[i][2]=0;
			answer[i][3]=1;
			cout << answer[i][0] <<answer[i][1]<<":"<<answer[i][2]<<answer[i][3]<<"\n";
		}
		else{
			answer[i][0]=0;
			answer[i][1]=time[i][0];
			answer[i][2]=time[i][2]+1;
			answer[i][3]=time[i][0];
			cout << answer[i][0] <<answer[i][1]<<":"<<answer[i][2]<<answer[i][3]<<"\n";
		}
	}
	else if(time[i][0]*10+time[i][1]>15&&time[i][0]*10+time[i][1]<20)
	{
		answer[i][0]=2;
		answer[i][1]=0;
		answer[i][2]=0;
		answer[i][3]=2;
		cout << answer[i][0] <<answer[i][1]<<":"<<answer[i][2]<<answer[i][3]<<"\n";
	}
	else if(time[i][2]*10+time[i][3]>=time[i][0]+time[i][1]*10)
	{
		if(time[i][0]==2&&time[i][1]==3)
		{
			answer[i][0]=0;
			answer[i][1]=0;
			answer[i][2]=0;
			answer[i][3]=0;
			cout << answer[i][0] <<answer[i][1]<<":"<<answer[i][2]<<answer[i][3]<<"\n";
		}
		else
		{
				answer[i][0]=time[i][0];
				answer[i][1]=time[i][1]+1;
				answer[i][2]=time[i][1]+1;
				answer[i][3]=time[i][0];
				cout << answer[i][0] <<answer[i][1]<<":"<<answer[i][2]<<answer[i][3]<<"\n";
		}
	}
	else if(time[i][2]*10+time[i][3]<time[i][0]+time[i][1]*10)
	{
		answer[i][0]=time[i][0];
		answer[i][1]=time[i][1];
		answer[i][2]=time[i][1];
		answer[i][3]=time[i][0];
		cout << answer[i][0] <<answer[i][1]<<":"<<answer[i][2]<<answer[i][3]<<"\n";
	}
	
	}
/*	cout << "\n";
	for(int i=0;i<n;i++)
	{
		if(i==n-1)
		{
			cout << answer[i][0] <<answer[i][1]<<":"<<answer[i][2]<<answer[i][3];
			break;
		}
		cout << answer[i][0] <<answer[i][1]<<":"<<answer[i][2]<<answer[i][3]<<"\n";
	}*/
	return 0;
	
}
