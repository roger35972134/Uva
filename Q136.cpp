#include<iostream>
#define MIN(a,b) (a<b?a:b)
#define MIN_3(a,b,c) (MIN(a,b)<c?MIN(a,b):c)
using namespace std;
int main()
{
	int i,uglynum[1501];
	int g5,g3,g2,max;
	uglynum[1]=g5=g3=g2=max=1;
	for(int i=2;i<1501;i++)
	{
		while(uglynum[g5]*5<=max)
			g5++;
		while(uglynum[g3]*3<=max)
			g3++;
		while(uglynum[g2]*2<=max)
			g2++;
		uglynum[i]=MIN_3(uglynum[g5]*5,uglynum[g3]*3,uglynum[g2]*2);
		max=uglynum[i];
	}
	printf("The 1500'th ugly number is %d.\n", uglynum[1500]);
}
