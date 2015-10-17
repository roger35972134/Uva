#include<iostream>
#include<string.h>
using namespace std;
char str[128];
int main()
{
	int n;
	scanf("%d",&n);
	gets(str);
	for(int i=0;i<n;i++)
	{
		gets(str);
		int s=0,m=0;
		for(int j=0;j<strlen(str);j++)
		{
			if(str[j]=='[')
				m++;
			if(str[j]==']')
			{
				if(m<=0)
				{
					m--;
					break;
				}
				m--;
			}
			if(str[j]=='(')
				s++;
			if(str[j]==')')
			{
				if(s<=0)
				{	
					s--;
					break;
				}
				s--;
			}
		}
		if(m==0&&s==0)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}
