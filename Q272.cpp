#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
string s;
string move(string s,int i,int e,int key)
{
	for(int k=e-2;k>i;k--)
		s[k+1]=s[k];
	s[i]=key;
	s[i+1]=key;
}
int main()
{
	
	while(1)
	{
		int i=0,count=1;
		s="";
		cin >> s;
		int length=s.length();
		while(1)
		{
			if(s[i]==34&&count%2==1)
			{
				move(s,i,length,97);
				count++;
			}
			else if(s[i]==34&&count%2==0)
			{
				move(s,i,length,39);
				count++;
			}
			i++;
			if(s[i]=48)
				break;
		}
		cout<<s<<endl;
	}
}
