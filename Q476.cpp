#include<iostream>
int main()
{
	char str[2];
	double nwx[11],nwy[11],sex[11],sey[11];
	int count=0,C=1;
	while(scanf("%s",&str))
	{
		if(str[0]=='*')
			break;
		scanf("%lf%lf%lf%lf",&nwx[count],&nwy[count],&sex[count],&sey[count]);
		count++;
	}
	double x,y;
	
	while(scanf("%lf%lf",&x,&y)!=EOF)
	{
		if(x>=9999.9&&y>=9999.9)
			break;
		int flag=0;
		for(int i=0;i<count;i++)
		{
			if(x>nwx[i]&&x<sex[i]&&y>sey[i]&&y<nwy[i])
			{
				printf("Point %d is contained in figure %d\n",C,i+1);
				flag=1;
			}
		}
		if(!flag)
		printf("Point %d is not contained in any figure\n",C);
		C++;
	}
	
}
