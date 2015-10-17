#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[1000];
	
	while(scanf("%s",str)!=EOF)
	{
		int count=0;
		int len=strlen(str);
		if (!len)
       	{
           putchar('\n');
           continue;
       	}
		for(int i=0;i<len;i++)
		{
			if(str[i]>='0'&&str[i]<='9')
			{
				count+=str[i]-'0';
			}
			else if(str[i]=='b')
			{
				for(int j=0;j<count;j++)
					cout << " ";
				count=0;
			}
			else if(str[i]=='!')
			{
				cout << endl;
			}
			else if((str[i]>='A'&&str[i]<='Z')||str[i]=='*')
			{
				for(int j=0;j<count;j++)
					cout << str[i];
				count=0;
			}
		}
		cout << endl;
	}
}
