#include<iostream>
using namespace std;
int main()
{
	int col,raw,Case=0,flag=0;
	char Input[150];
	while(gets(Input))
	{
		char bombchar[102][102];
		int bomb[102][102]={0};
		sscanf(Input,"%d%d",&raw,&col);
		if(!col&&!raw)
			break;
		for(int i=0;i<raw;i++)
			gets(bombchar[i]);
		for(int i=0;i<raw;i++)
		{
			for(int j=0;j<col;j++)
			{
				if(bombchar[i][j]=='*')
				{
					bomb[i-1][j-1]++,bomb[i][j-1]++,bomb[i+1][j-1]++;
					bomb[i-1][j]++,bomb[i+1][j]++;
					bomb[i-1][j+1]++,bomb[i][j+1]++,bomb[i+1][j+1]++;
				}
			}
		}
		if(flag)
			printf("\n");
		flag=1;
		printf("Field #%ld:\n", ++Case);
		for(int i=0;i<raw;i++)
		{
			for(int j=0;j<col;j++)
			{
				if(bombchar[i][j]=='*')
					printf("*");
				else
					printf("%d",bomb[i][j]);
			}
			printf("\n");
		}
		
	}
}	
