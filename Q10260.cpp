#include<iostream>
#include<string.h>
char sound[6][10]={"BFPV",
				  "CGJKQSXZ",
				  "DT",
				  "L",
				  "MN",
				  "R"};
int flag=7;
int main()
{
	char str[25];
	while(scanf("%s",&str)!=EOF)
	{
		flag=7;
		bool Flag=false;
		for(int k=0;k<strlen(str);k++)
		{
			Flag=false; 
			for(int i=0;i<6;i++)
			{
				for(int j=0;j<10;j++)
				{
					if(sound[i][j]==str[k]&&flag!=i)
					{
						printf("%d",i+1);
						flag=i;
						Flag=true;
						break;
					}
					else if(flag==i&&sound[i][j]==str[k])
					{
						Flag=true;
					}
					
				}
			}
			if(!Flag)
				flag=7;
		}
		printf("\n");
	}
}
