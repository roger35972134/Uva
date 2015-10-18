#include<iostream>
int main()
{
	int n,C=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int N,K,P;
		scanf("%d%d%d",&N,&K,&P);
		K=K+P%N;
		K=K%N;
		if(K==0)
			K=N;
		printf("Case %d: %d\n",C++,K);
	}
	
}
