#include<cstdio>
#include<iostream>
using namespace std;
int dateofmonth(int month,int year)
{
	int day;
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
		day=31;
	if(month==4||month==6||month==9||month==11)
		day=30;
	if(month==2)
		day=28;
	if(month==2&&year%4==0)
		day=29;
	if(month==2&&year%100==0)
		day=28;
	if(month==2&&year%400==0)
		day=29;
	return day;
}
int main()
{
	int add,date,month,year;
	while(scanf("%d%d%d%d",&add,&date,&month,&year),add,date,month,year)
	{
		
		while(add)
		{
			if(date+add<=dateofmonth(month,year))
				date+=add,add=0;
			else
			{
				if(month==12)
					add-=(dateofmonth(month,year)-date+1),year++,month=1,date=1;
				else
					add-=(dateofmonth(month,year)-date+1),month++,date=1;
			}
			/*if(add>=dateofmonth(month,year))
			{
				add-=dateofmonth(month,year);
				if(month==12)
				{
					year++;
					month=1;
					date=1;
				}
				else
				{
					month++;
					date=1;
				}
			}*/
		}
		printf("%d %d %d\n",date,month,year);
	}
}
