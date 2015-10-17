#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int count=0;
	char str[1000];
	while(gets(str))
	{
		for(int i=0;i<strlen(str);i++)
			if(str[i]=='"')
			{
				count++;
				if(count%2==1)
					printf("``");
				else
					printf("''");
			}
			else
			{
				printf("%c",str[i]);
			}
		printf("\n");	
	}
}
