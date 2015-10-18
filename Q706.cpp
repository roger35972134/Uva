#include<iostream>
#include<string.h>
char pattern[5][32]={" -     -  -     -  -  -  -  - ",
					 "| |  |  |  || ||  |    || || |",
					 "       -  -  -  -  -     -  - ",	
					 "| |  ||    |  |  || |  || |  |",
					 " -     -  -     -  -     -  - "};

int main()
{
	int n;
	char str[11];
	while(scanf("%d%s",&n,&str),n&&str)
	{
		int len=strlen(str);
		for(int line=0;line<5;line++)
			if(line%2==0)
			{
				for(int i=0;i<len;i++)
				{
					if(i)
						printf(" ");
					int start=(str[i]-'0')*3;
					printf(" ");
					for(int j=0;j<n;j++)
					{
						printf("%c",pattern[line][start+1]);
					}
					printf(" ");
					
				}
				printf("\n");
			}
			else
			{
				for(int k=0;k<n;k++)
				{
					for(int i=0;i<len;i++)
					{
						if(i)
							printf(" ");
						int start=(str[i]-'0')*3;
							printf("%c",pattern[line][start]);
							for(int j=0;j<n;j++)
							{
								printf(" ");
							}
							printf("%c",pattern[line][start+2]);
					}
					printf("\n");
				}
			}
		printf("\n");
	}
}
