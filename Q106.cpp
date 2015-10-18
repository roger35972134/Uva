#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
bool ppp(int a,int b,int c)
{
	double sa=sqrt(a)+1;
	double sb=sqrt(b)+1;
	double sc=sqrt(c)+1;
	int aisppp[a];
	for(int i=0;i<a;i++)
		aisppp[i]=0;
	int bisppp[b];
	for(int i=0;i<b;i++)
			bisppp[i]=0;
	int cisppp[c];
	for(int i=0;i<c;i++)
		cisppp[i]=0;
	for(int i=2;i<sa;i++)
		for(int j=i;j<a;j++)
		if(i*j==a)
			{aisppp[i-1]=1;aisppp[j-1]=1;}
	for(int i=2;i<sb;i++)
		for(int j=i;j<b;j++)
		if(i*j==b)
			{bisppp[i-1]=1;bisppp[j-1]=1;}
	for(int i=2;i<sc;i++)
		for(int j=i;j<c;j++)
		if(i*j==c)
			{cisppp[i-1]=1;cisppp[j-1]=1;}
	for(int i=0;i<a;i++)
		if(aisppp[i]==1&&bisppp[i]==1&&cisppp[i]==1)
			return false;
	return true;
}
int main()
{
while(1)
{
	int a,b,c,n;
	cout << "input n: ";
	cin >> n;
	int p2[n];
	int p=0;
	int p1=0;
	for(int i=0;i<n;i++)
		p2[i]=0;
	for(c=2;c<=n;c++)
		for(b=2;b<c;b++)
			for(a=2;a<b;a++)
				if((a*a)+(b*b)==(c*c)&&a!=b)
					{
						if(ppp(a,b,c))
							p1++;
						p2[a-1]=1;
						p2[b-1]=1;
						p2[c-1]=1;
					}
	for(int i=0;i<n;i++)
		if(p2[i]==0)
			p++;

	cout << p1 << " " << p<<endl;
}
	system("pause");
}
