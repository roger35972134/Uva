#include<iostream>

int main()
{
	double c,f;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lf%lf",&c,&f);
		f=f*5/9;
		c+=f;
		printf("Case %d: %.2lf\n",i,c);
	}
}
