#include<iostream>
#include<string.h>
char str1[30],str2[30];
int n1,n2;
int main()
{
	while(gets(str1))
	{
		gets(str2);
		int len1=strlen(str1),len2=strlen(str2);
		n1=0,n2=0;
		for(int i=0;i<len1;i++)
		{
			if(str1[i]>='A'&&str1[i]<='Z')
			{
				n1+=str1[i]-64;
			}
			if(str1[i]>='a'&&str1[i]<='z')
			{
				n1+=str1[i]-96;
			}
		}
		for(int i=0;i<len2;i++)
		{
			if(str2[i]>='A'&&str2[i]<='Z')
			{
				n2+=str2[i]-64;
			}
			if(str2[i]>='a'&&str2[i]<='z')
			{
				n2+=str2[i]-96;
			}
		}
		int result1=n1,result2=n2;
		while(n1>9)
		{
			result1=0;
			while(n1)
			{
				result1+=n1%10;
				n1/=10;
			}
			n1=result1;
		};
		while(n2>9)
		{
			result2=0;
			while(n2)
			{
				result2+=n2%10;
				n2/=10;
			}
			n2=result2;
		}
		/*if(result1==0&&result2==0)
		{
			printf("\n");
			continue;
		}*/
		if(result1<result2)
			printf("%.2lf %%\n",(double)result1/result2*100);
		else
			printf("%.2lf %%\n",(double)result2/result1*100);
	}
}
