#include<iostream>
#include<cmath>
int main()
{
	int n;
	double student[1001];
	while(scanf("%d",&n)!=EOF,n)
	{
		int sum=0;
		for(int i=0;i<n;i++)
		{
			scanf("%lf",&student[i]);
			sum+=student[i]*100;
		}
		double average=(double)sum/n;
		average=floor(average+0.5)/100;
		double answer1=0,answer2=0;
		for(int i=0;i<n;i++)
		{
			if(average<student[i])
				answer1+=student[i]-average;
			else
				answer2+=average-student[i];
		}
		if(answer1<answer2)
			printf("$%.2lf\n",answer1);
		else
		printf("$%.2lf\n",answer2);
	}
}
