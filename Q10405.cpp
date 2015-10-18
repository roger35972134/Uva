#include<iostream>
#include<string.h>
#define Len 1000
using namespace std;
char str1[Len+1],str2[Len+1];
	
int lcs_length(int strlen1,int strlen2)
{
	int i,j;
	int table[strlen1+1][strlen2+1];
	memset(table,0,sizeof(table));
	for(i=1;i<=strlen1;i++)
		for(j=1;j<=strlen2;j++)
			{
				if(str1[i-1]==str2[j-1])
					table[i][j]=table[i-1][j-1]+1;
				else if(table[i-1][j]>table[i][j-1])
					table[i][j]=table[i-1][j];
				else 
					table[i][j]=table[i][j-1];
			}
	return table[strlen1][strlen2];
}
int main()
{
	while(gets(str1))
	{
		gets(str2);
		int strlen1=strlen(str1),strlen2=strlen(str2);
		printf("%d\n",lcs_length(strlen1,strlen2));
	}
}
