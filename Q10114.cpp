#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int month,valuedown,n;
	double first,credit,carsvalue,creditsurplus;
	while(scanf("%d%lf%lf%d", &month, &first, &credit, &valuedown) && month>=0)
	{	
		double value[101]={};
		while(valuedown--)
		{
			scanf("%d",&n);
            scanf("%lf",&value[n]);
		}
		for(int i=0;i<=month;i++)
		{
			if(value[i]==0.0)
				value[i]=value[i-1];
		}
		carsvalue=first+credit;
		creditsurplus=credit;
		for(int i=0;i<=month;i++)
		{
			carsvalue*=(1.0-value[i]);
			if(carsvalue>=creditsurplus)
			{
				if(i==1)
					printf("1 month\n");
				else
					printf("%d months\n",i);
				break;
			}
			
			creditsurplus-=credit/month;
		}
	}
	return 0;
}
