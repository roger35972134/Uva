#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[1000];
	while(gets(str))
	{
		for(int i=0;i<strlen(str);i++)
			printf("%c",str[i]-7);
		printf("\n");
	}
}
