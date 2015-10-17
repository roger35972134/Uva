#include<iostream>
#include<string.h>
using namespace std;
char input[15];
int toint[15];
int f()
{
	int buffer=0;
	for(int i=0;i<strlen(input);i++)
	{
		buffer+=(input[i]-48);
	}
	while(buffer/10>0)
	{
		memset(input,0,sizeof(input));
		int i=0;
		while(buffer>0)
		{
			input[i]=buffer%10+48;
			buffer/=10;
			i++;
		}
		for(int j=0;j<strlen(input);j++)
		{
			buffer+=(input[j]-48);
		}
	}
	return buffer;
}
int main()
{
	while(cin >> input,input[0]!='0')
	{
		
		cout << f() << endl;
	}
}
