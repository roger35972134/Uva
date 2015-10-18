#include<iostream>
int s[1000];
int main()
{
	int n;
	scanf("%d",&n);
	for(int a=1;a<=n;a++)
	{
		printf("Case #%d: ",a);
		long long int num,sum=0;
		scanf("%d",&num);
		int nbuf=num;
		int i=0;
		s[0]=num;
		bool flag=false;
		while(++i)
		{
			sum=0;
			while(nbuf>0)
			{
				int buf=nbuf%10;
				sum+=buf*buf;
				nbuf/=10;
			}
			if(sum==1)
			{
				printf("%d is a Happy number.\n",num);
				break;
			}
			for(int j=0;j<i;j++)
			{
				if(sum==s[j])
				{
					printf("%d is an Unhappy number.\n",num);
					flag=true;
				}
			}
			if(flag)
				break;
			nbuf=sum;
			s[i]=sum;
		}
		
	}
}
