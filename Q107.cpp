#include<iostream>
#include<cstdlib>
using namespace std;
long long int m,n;
void find(int i)
{
	long long int j=1;
	while(1)
	{
		long long int x=1,y=1;
		while(1)
		{
			x=1,y=1;
			for(int k=0;k<j;k++)
			{
					y*=i;
					x*=(i+1);
			}
			if(y==n&&x==m)
			{
				long long int c=0,d=n;
				for(int k=0;k<j;k++)
				{
					int e=1,f=m;
					for(int q=0;q<k;q++)
					{
						e*=i;
						f=((f*i)/(i+1));
					}
					c+=e;
					d+=f;
				}
				cout<< c << " ";
				cout<< d << endl;
				return;
			}
			else if(y>n&&x>m)
				break;
			j++;
		}
		j=1;
		i++;
	}
}
int main()
{
	while(scanf("%lld%lld",&m,&n)!=EOF,m&&n)
	{
		
		if(m==1&&n==1)
		{
			cout << "0 1\n";
		}
		else
		{
			if(n==1)
				find(1);
			find(2);
		}
	}
}
