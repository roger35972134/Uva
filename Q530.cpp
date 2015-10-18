#include<iostream>
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		if(n==0)
			break;
		double sum=1;
		if(m>n/2)
			m=n-m;
		for(int i=n,j=1;j<=m;i--,j++)
		{
			sum=sum*i;
			sum=sum/j;
		}
		printf("%.0lf\n",sum);
	}
}
