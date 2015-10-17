#include<iostream>
#include<cstdlib>
using namespace std;
int e;
void test(int i)
{
		e++;
		if(i==1)
			return;
		if(i%2==1)
			return test((3*i)+1);
		else
			return test(i/2);
}
int main()
{
	int i,j,max=2,a;
	while(scanf("%d%d",&i,&j)==2)
	{
	max=0;
	printf("%d ",i);
	printf("%d ",j);
	if(i>j)
	{
		int tmp=i;
		i=j;
		j=tmp;
	}
	for(a=i;a<=j;a++)
	{
			e=0;
			test(a);
			if(e>max)
				max=e;
	}
	printf("%d\n",max);
	}
	return 0;
}
