#include<iostream>
#include<string.h>
#define MAX 10001
bool taken[20][MAX];
int main()
{
	int N,num,dur[20],time[MAX];
	while(scanf("%d",&N)!=EOF)
	{
		scanf("%d",&num);
		for(int i=0;i<num;i++)
		{
			scanf("%d",&dur[i]);
		}
		memset(time,0,sizeof(time));
		memset(taken,false,sizeof(taken));
		for(int i=num-1;i>=0;i--)
			for(int j=N;j>=dur[i];j--)
			{
				if(time[j]<time[j-dur[i]]+dur[i])
				{
					time[j]=time[j-dur[i]]+dur[i];
					taken[i][j]=true;
				}
			}
		for(int i=0,j=N;i<num;i++)
		{
			if(taken[i][j])
			{
				printf("%d ",dur[i]);
				j-=dur[i];
			}
		}
		printf("sum:%d\n",time[N]);
	}
}
