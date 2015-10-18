#include<iostream>
#include<cstdlib>
#include<climits>
#include<cstring>
using namespace std;
void zero(bool choose[],int n)
{
	for(int i=0;i<n;i++)
		choose[i]=false;
}
int main()
{
	int min=INT_MAX;
	static bool choose[3];
	int count=0,maxcount=0;
	char str[18];
	static bool ismax[6];
	int packing[3][3],sum=0,buffer=0;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		{
			scanf("%d",&packing[i][j]);
			sum+=packing[i][j];
		}
	zero(choose,3);
	zero(ismax,6);
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		{
			buffer=sum-packing[i][j];
			if(j==0)
				str[count]='B';
			if(j==1)
				str[count]='G';
			if(j==2)
				str[count]='C';
			count++;
			choose[j]=true;
			for(int k=i+1;k<i+3;k++)
			{
				for(int l=0;l<3;l++)
				{
					if(choose[l])
						continue;
					else
					{
						buffer=buffer-packing[k%3][l];
						if(l==0)
							str[count]='B';
						if(l==1)
							str[count]='G';
						if(l==2)
							str[count]='C';
						count++;
						choose[l]=true;
						break;
					}
				}
			}
			//min
			if(buffer<min)
			{
				min=buffer;
				zero(ismax,6);
				ismax[maxcount]=true;
			}
			maxcount++;
			buffer=sum-packing[i][j];
			zero(choose,3);
			//another
			if(j==0)
				str[count]='B';
			if(j==1)
				str[count]='G';
			if(j==2)
				str[count]='C';
			count++;
			choose[j]=true;
			for(int k=i+2;k>i;k--)
			{
				for(int l=0;l<3;l++)
				{
					if(choose[l])
						continue;
					else
					{
						buffer=buffer-packing[k%3][l];
						if(l=0)
							str[count]='B';
						if(l=1)
							str[count]='G';
						if(l=2)
							str[count]='C';
						count++;
						choose[l]=true;
						break;
					}
				}
			}
			if(buffer<min)
			{
				min=buffer;
				zero(ismax,6);
				ismax[maxcount]=true;
			}
			maxcount++;
			zero(choose,3);
			choose[j]=true;
		}
			
	for(int i=0;i<6;i++)
		if(ismax[i])
		{
			for(int j=i*3;j<i*3+3;j++)
			{
				cout << str[j];
			}
		}
	printf(" %d",min);
	system("pause");
}
