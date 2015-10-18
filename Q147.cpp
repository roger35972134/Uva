#include<iostream>
long long int dollar[30001]={0};
int main()
{
	int money[11]={10000,5000,2000,1000,500,200,100,50,20,10,5};
	dollar[0]=1;
	for(int i=0;i<11;i++)
		for(int j=money[i];j<30001;j++)
			dollar[j]+=dollar[j-money[i]];
			
	int m,n;
	while(scanf("%d.%d",&n,&m)!=EOF,n||m)
	{
		printf("%3d.%02d%17lld\n",n,m,dollar[n*100+m]);
	}
}
