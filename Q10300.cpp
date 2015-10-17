#include<iostream>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int num,sum=0;
		scanf("%d",&num);
		for(int j=0;j<num;j++)
		{
			int area,animal,level;
			scanf("%d%d%d",&area,&animal,&level);
			sum+=area*level;
		}
		printf("%d\n",sum);
	}
}
