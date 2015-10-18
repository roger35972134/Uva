#include<iostream>
#include<string.h>
char str1[201],str2[201];
int main()
{
	int n;
	scanf("%d",&n);
	for(int a=0;a<n;a++)
	{
		scanf("%s%s",&str1,&str2);
		int i,j,buf[201]={0};
		for(i=strlen(str1)-1;i>=0;i--)
		{
			buf[i]=str1[i]-'0';
		}
		for(i=strlen(str2)-1;i>=0;i--)
		{
			buf[i]+=str2[i]-'0';
		}
		for(i=0;i<201;i++)
		{
			if(buf[i]>=10)
			{
				buf[i+1]++;
				buf[i]=buf[i]%10; 
			}
		}
		bool flag=false;
		for(i=200;i>=0;i--)
		{
			if(buf[i]!=0)
			{
				for(j=0;j<=i;j++)
				{
					if(buf[j]!=0)
					flag=true;
					if(flag)
					printf("%c",buf[j]+48);
				}
					
				break;
			}
		}
		printf("\n");
		
	}
}
