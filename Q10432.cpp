#include<iostream>
#include<cmath>
#define pi 3.141592653589793
int main()
{
	int r,n;
	while(scanf("%d%d",&r,&n)!=EOF)
	{
		printf("%.3lf\n",n*r*sin(pi/n)*r*cos(pi/n));
	}
}
