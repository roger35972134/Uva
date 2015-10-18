#include<iostream>
char F[5001][1100]={{0},{1}};
int main()
{
	char s,carry;
	int i,j,n;
	//pre
	for(i=2;i<5001;i++)
	{
		for(j=carry=0;j<1100;j++)
		{
			s=F[i-1][j]+F[i-21][j]+carry;
			F[i][j]=s%10;
			carry=s/10;
		}
	}
	
	while(scanf("%d",&n)!=EOF)
	{
		printf("The Fibonacci number for %d is ",n);
		if(n==0)
		{
			printf("0\n");
			continue;
		}
		i=1099;
		while(F[n][i]==0)
			i--;
		for(;i>=0;i--)
			printf("%d",F[n][i]);
		puts("");
	}
}
