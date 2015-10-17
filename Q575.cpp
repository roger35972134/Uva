#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;
char n[50];
int main()
{
	int sum=0;
	int num[50];
	while(cin >>n,n[0]!='0')
	{
		int len=strlen(n);
		sum=0;
		for(int i=len-1;i>=0;i--)
		{
			num[len-i-1]=n[i]-'0';
		}
		for(int i=0,j=2;i<len;j*=2,i++)
			sum+=num[i]*(j-1);
		printf("%d\n",sum);
	}
}
