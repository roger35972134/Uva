#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
	char str[1000];
	int count=0,i=0;
	while(gets(str))
	{
		count=0;
		i=0;
		while(str[i])
		{
			if(isalpha(str[i])&&!isalpha(str[i+1]))//str[i]==32&&((str[i+1]>65&&str[i+1]<90)||(str[i+1]>97&&str[i+1]<122)))
				count++;
			i++;
		}
		cout << count << "\n";
	}
}
