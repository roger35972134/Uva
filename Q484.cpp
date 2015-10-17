#include<iostream>
int array[10000];
int count[10000];
int main()
{
	int n;
	int num=0;
	while(scanf("%d",&n)!=EOF)
	{
		bool newnum=true;
		
		for(int i=0;i<num;i++)
		{
			if(n==array[i])
			{
				count[i]++;
				newnum=false;
				break;
			}
		}
		if(newnum)
		{
			array[num]=n;
			count[num]++;
			num++;
		}
	}
	for(int i=0;i<num;i++)
		printf("%d %d\n",array[i],count[i]);
}
