#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[100000],t[100000];
	bool flag=false;
	while(scanf("%s%s",&s,&t)!=EOF)
	{
		int tlen=strlen(t);
		int slen=strlen(s);
		int i=0,j=0;
		flag=false;
		while(j<=tlen)
		{
			if(i==slen)
			{
				flag=true;
				break;
			}
			if(s[i]==t[j])
			{
				i++;
			}
				j++;
		}
		if(flag)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	
}
