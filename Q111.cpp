#include<iostream>
#include<string.h>
#define Max 21
int grade[Max][Max];
int student[Max],correct[Max];
int lcs(int n)
{
	memset(grade,0,sizeof(grade));
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(student[i]==correct[j])
				grade[i][j]=grade[i-1][j-1]+1;
			else
				grade[i][j]=(grade[i-1][j]>grade[i][j-1])?grade[i-1][j]:grade[i][j-1];
}
int main()
{
	int n,j;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{         
		scanf("%d",&j);
		correct[j]=i;
	}
	while(scanf("%d",&j)!=EOF)
	{
		student[j]=1;
		for(int i=2;i<=n;i++)
		{
			scanf("%d",&j);
			student[j]=i;
		}
		lcs(n);
		printf("%d\n",grade[n][n]);
	}
}
