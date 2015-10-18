#include<iostream>
#include<string.h>
using namespace std;
char vocsmall[26];
char vocbig[26];
int store[26];
char str[16384]={};
bool flag=false;
int main()
{ 
	for(int i=0;i<26;i++)
		{
			vocsmall[i]=i+97;
			vocbig[i]=i+65;
		}
	memset(store,0,sizeof(store));
	int n;
	cin >> n;
	gets(str);
	for(int i=0;i<n;i++)
	{
		gets(str);
		for(int j=0;j<strlen(str);j++)
		{
			for(int k=0;k<26;k++)
				if(str[j]==vocsmall[k]||str[j]==vocbig[k])
					store[k]++;
		}
	}
	
	for(int i=0;i<25;i++)
		for(int j=0;j<25-i;j++)
			if(store[j]>store[j+1])
			{
				swap(store[j],store[j+1]);
				swap(vocbig[j],vocbig[j+1]);
			}
	for(int i=0;i<25;i++)
		for(int j=0;j<25-i;j++)
			if(store[j]==store[j+1]&&vocbig[j]<vocbig[j+1])
			{
				swap(vocbig[j],vocbig[j+1]);
			}
	for(int i=25;i>=0;i--)
	{
		/*if(flag&&store[i])
			cout << "\n";
		flag=true;*/
		if(store[i])
		cout << vocbig[i]<< " " << store[i]<<endl;
	}
}
