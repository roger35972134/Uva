#include<iostream>
int b[11];
int main()
{
	printf("Lumberjacks:\n");
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<10;j++)
		{
			scanf("%d",&b[j]);
		}
		bool flag=true;
		if(b[0]>b[1])
		{
			
			for(int k=1;k<9;k++)
			{
				if(b[k]<b[k+1])
				{
					flag=false;
					break;
				}
			}
		}
		else if(b[0]<b[1])
		{
			for(int k=1;k<9;k++)
			{
				if(b[k]>b[k+1])
				{
					flag=false;
					break;
				}
			}
		}
		if(flag)
			printf("Ordered\n");
		else
			printf("Unordered\n");
	}
}
