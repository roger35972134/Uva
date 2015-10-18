#include<iostream>
using namespace std;
int main()
{
	int add1,add2,r1,r2;
	while(scanf("%d%d",&add1,&add2),add1||add2)
	{
		int counter=0,carry=0;
		while(add1||add2)
		{
			r1=add1%10,r2=add2%10;
			add1/=10,add2/=10;
			carry=(carry+r1+r2)/10;
			if(carry)counter++;
		}
		if(counter==0)
			printf("No carry operation.\n");
		else if(counter==1)
			printf("1 carry operation.\n");
		else
			printf("%d carry operations.\n",counter);
	}
	return 0;
}
