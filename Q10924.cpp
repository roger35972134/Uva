#include<iostream>
#include<string.h>
#include<cmath>
void P(int n)
{
	if(n==0)
	{
		printf("It is not a prime word.\n");
		return;
	}
	if(n==1)
	{
		printf("It is a prime word.\n");
		return;
	}
	for(int i=2;i<=(int)sqrt(n);i++)
	{
		if(n%i==0)
		{
			printf("It is not a prime word.\n");
			return;
		}
	}
	printf("It is a prime word.\n");
}
int main()
{
	char L[21];
	while(scanf("%s",&L)!=EOF)
	{
		int sum=0;
		for(int i=0;i<strlen(L);i++)
		{
			if(L[i]>=65&&L[i]<=90)
			{
				sum+=L[i]-38;
			}
			else if(L[i]>=97&&L[i]<=122)
			{
				sum+=L[i]-96;
			}
		}
		P(sum);
	}
}
