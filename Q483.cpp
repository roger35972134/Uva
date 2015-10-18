#include<iostream>
#include<string.h>
using namespace std;
char result[50]={};
char str[50]={};
int main()
{
	while(gets(str))
	{
		int start=0;
		
		
		for(int i=0;i<=strlen(str);i++)
		{
			if(str[i]==' ')
			{	
				for(int j=0;j<i-start;j++)
				{
					cout << str[i-j-1];
				}
				cout <<" ";
				start=i+1;
			}
			else if(str[i]=='\0')
			{
				for(int j=0;j<i-start;j++)
				{
					cout << str[i-j-1];
				}
			}
		}
		cout << endl;
	}
}
