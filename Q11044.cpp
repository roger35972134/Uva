#include<iostream>
int main()
{
	int m,n,num;
	while(scanf("%d",&num)!=EOF)
	{
		for(int i=0;i<num;i++)
		{
			scanf("%d%d",&m,&n);
			printf("%d\n",(m/3)*(n/3));
		}
	}
}
