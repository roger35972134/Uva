#include<iostream>
#include<string.h>
char str1[105],str2[105];
int LCS[105][105]={0};
int main()
{
	int Case=0;
	while(gets(str1))
	{
		if(str1[0]=='#'&& str1[1]=='\0')
			break;
		gets(str2);
		memset(LCS,0,sizeof(LCS));
		int len1=strlen(str1);
		int len2=strlen(str2);
		for(int i=1;i<=len1;i++)
			for(int j=1;j<=len2;j++)
			{
				if(str1[i-1]==str2[j-1])
				{
					LCS[i][j]=LCS[i-1][j-1]+1;
				}
				else
				{
					LCS[i][j]=(LCS[i-1][j]>LCS[i][j-1])?LCS[i-1][j]:LCS[i][j-1];
				}
			}
		printf("Case #%d: you can visit at most %d cities.\n",++Case,LCS[len1][len2]);
	}
}
