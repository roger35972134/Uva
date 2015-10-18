#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int m;
		int max=0,min=100;
		scanf("%d",&m);
		for(int j=0;j<m;j++)
		{
			int temp;
			scanf("%d",&temp);
			if(temp>max)
				max=temp;
			if(temp<min)
				min=temp;
		}
		printf("%d\n",2*(max-min));
	}
}
