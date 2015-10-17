#include<iostream>
#include<cmath>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int max=0,max_num=0,L,U;
		scanf("%d%d",&L,&U);
		for(int j=L;j<=U;j++)
		{
			int buf=0;
			for(int k=1;k<=sqrt(j);k++)
			{
				if(j%k==0)
				{
					if(k==sqrt(j))
						buf++;
					else
						buf+=2;
				}
			}
			if(buf>max)
			{
				max=buf;
				max_num=j;
			}
		}
		printf("Between %d and %d, %d has a maximum of %d divisors.\n",L,U,max_num,max);
	}
}
