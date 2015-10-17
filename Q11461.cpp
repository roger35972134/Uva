#include<iostream>
#include<cmath>
int main()
{
	bool num[100000]={false};
	for(int i=1;i<sqrt(100000);i++)
	{
		num[i*i]=true;
	}
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF,a)
	{
		int count=0;
		for(int i=a;i<=b;i++)
		{
			if(num[i])
				count++;
		}
		printf("%d\n",count);
	}
}
