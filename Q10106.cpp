#include<iostream>
#include<string.h>
char x[251]={0},y[251]={0};
int main()
{
	//chang to int and muti	
	while(scanf("%s %s",x,y)!=EOF)
	{
		int X=strlen(x),Y=strlen(y);
		int i,j,k,l;
		int ans[600]={0};
		for(i=X-1,k=0;i>=0;i--,k++)
			for(j=Y-1,l=0;j>=0;j--,l++)
				{
					ans[k+l]+=(x[i]-48)*(y[j]-48);
					ans[k+l+1]+=ans[k+l]/10;
					ans[k+l]%=10;
				}
		for(i=X+Y;i>=0;i--)
		{
			if(ans[i]!=0)
			{
				for(;i>=0;i--)
				{
					printf("%c",ans[i]+48);
				}
				break;
			}
			else if(i==0) printf("0");
		}
		printf("\n");
	}
	return 0;
}
