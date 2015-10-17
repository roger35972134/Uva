#include<iostream>
using namespace std;
long double C(int n,int m)
{
	long double result=1;
	if(n-m<m) m=n-m;
	for(int i=1;i<=m;i++)
	{
		result=result*(n-m+i)/i;
	}
	return result;
}
int main()
{
	int n,r;
    while(scanf("%d %d",&n,&r),n,r){
        printf("%d things taken %d at a time is %.0Lf exactly.\n",n,r,C(n,r));
    }
    return 0;
}
