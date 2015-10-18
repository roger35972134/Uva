#include<iostream>
#include<cmath>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF,n)
	{
		int count=2;
		printf("%d = ",n);
		bool flag=false;
		if(n<0)
			{
				printf("-1");
				n=-n;
				flag=true;
			}
		/*while(count<sqrt(n))
		{
			if(n%count==0)
			{
				if(flag)
					printf(" x ");
				flag=true;
				printf("%d",count);
				n/=count;
			}
			else
			{
				count++;
			}
		}*/
		for(int i=2;i<=sqrt(n);i++)
		{
			while(!(n%i))
			{
				if(flag)
					printf(" x ");
				printf("%d",i);
				n/=i;
				flag=true;
			}
		}
		if(n>1)
		{
			if(flag)
				printf(" x ");
			printf("%d",n);
		}
		if(n==1&&!flag)
			printf("1");
		printf("\n");
	} 
}
