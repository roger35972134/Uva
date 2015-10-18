#include<iostream>
#include<climits>
#include<string.h>
#include<cstdio>
using namespace std;
int main()
{
	char maxcomp[1000][81],str[81],company[81];
	int r,maxr=0;
	double d,mind=INT_MAX;
	int n,p,count=1;
	while(cin >> n >> p&&(n!=0||p!=0))
	{
		maxr=0;
		mind=INT_MAX;
		gets(str);
		for(int i=0;i<n;i++)
			gets(str);
		
		
		
		for(int i=0;i<p;i++)
		{
			
			gets(company);
			scanf("%f %d\n",&d,&r);
			for(int j=0;j<r;j++)
				gets(str);
			if(maxr<r)
			{
				maxr=r;
				mind=d;
				strcpy(maxcomp[count],company);
			}
			else if(maxr==r) 
			{
				if(mind>d)
				{
					mind=d;
					strcpy(maxcomp[count],company);
				}
			}
		}
		count++;
	}
	for(int i=1;i<count;i++)
	{
		if(i!=1)cout << endl;
		cout << "RFP #" << i << endl;
		cout << maxcomp[i] << "\n";
	}
}
