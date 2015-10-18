#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double n,p;
	while(scanf("%lf%lf",&n,&p)!=EOF)
	{
		printf("%.0lf\n",(double)pow(p,1/n));
	}
}
