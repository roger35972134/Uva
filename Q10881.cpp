#include<iostream>
using namespace std;

int main()
{
	int k;
	cin >> k;
	for(int i=1;i<=k;i++)
	{
		int L,T,n;
		printf("Case #%d:\n",i);
		int tmp;
		char tmpc;
		cin >> L >> T >>n;
		int p[n];
		char d[n];
		for(int j=0;j<n;j++)
			cin >> p[j] >> d[j];
		for(int l=0;l<T;l++)
		{
			for(int j=0;j<n;j++)
			{
				if(d[j]=='L')
					p[j]--;
				else
					p[j]++;
				
			}
			for(int m=0;m<n;m++)
				for(int o=0;o<n;o++)
						if(p[o]-0.5==p[m]+0.5&&o!=m)
						{
							
							tmp=p[o];
							p[o]=p[m];
							p[m]=tmp;
							tmpc=d[o];
							d[o]=d[m];
							d[m]=tmpc;
						}
						else if(p[o]==p[m]&&o!=m&&l==T-1)
						{
							d[m]='T';
							d[o]='T';
						}
		}
		for(int a=0;a<n;a++)
		{
			string str;
			if(d[a]=='T')
				str="Turning";
			if(d[a]=='L')
				str="L";
			if(d[a]=='R')
				str="R";
			if(p[a]>L)
				printf("Fell off\n");
			else
			cout << p[a] << " " << str << endl;
			if(a==n-1)
				cout << endl;
		}
	}
}
