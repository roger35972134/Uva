#include<iostream>
int math[1001][2601];
int main()
{
	int i,j,n;
	math[0][0]=1;math[1][0]=1;
	for(i=2;i<1001;i++)
	{
		for(j=0;j<2600;j++)
		{
			math[i][j]=math[i][j]+math[i-1][j]*i;
			if(math[i][j]>=10)
			{
				math[i][j+1]=math[i][j+1]+math[i][j]/10;
				math[i][j]=math[i][j]%10;
			}
		}
	}
	while(scanf("%d",&n)!=EOF)
	{
		printf("%d!\n",n);
		for(i=2599;i>=0;i--)
		{
			if(math[n][i]!=0)
			{
				for(j=i;j>=0;j--)
					printf("%d",math[n][j]);
					break;
			}
		}
		printf("\n");
	}
	
}
