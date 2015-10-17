#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	int sort[1000];
	while(scanf("%d",&n)!=EOF)
	{
		int count=0;
		for(int i=0;i<n;i++)
			scanf("%d",&sort[i]);
		for(int i=0;i<n-1;i++)
			for(int j=0;j<n-i-1;j++)
				if(sort[j]>sort[j+1])
				{
					swap(sort[j],sort[j+1]);
					count++;
				}
		printf("Minimum exchange operations : %d\n",count);
	}
}
