#include<iostream>
#include<climits>
#include<string.h>
using namespace std;
char packcolor[4];
void packcolorchoose(int i,int j)
{
	if(i%3==0)
		packcolor[j]='B';
	if(i%3==1)
		packcolor[j]='G';
	if(i%3==2)
		packcolor[j]='C';
}
int main()
{
	int pack[9];
	char min[4];
	while(cin >> pack[0]>>pack[1]>>pack[2]>>pack[3]>>pack[4]>>pack[5]>>pack[6]>>pack[7]>>pack[8])//scanf("%d%d%d%d%d%d%d%d%d",&pack[0],&pack[1],&pack[2],&pack[3],&pack[4],&pack[5],&pack[6],&pack[7],&pack[8]))
	{
		int sum=0,sort=INT_MAX,max=0;
		for(int i=0;i<9;i++)
			sum+=pack[i];
		for(int i=0;i<3;i++)
			for(int j=3;j<6;j++)
				for(int k=6;k<9;k++)
					{
						if(i%3!=j%3&&i%3!=k%3&&j%3!=k%3)
							if(pack[i]+pack[j]+pack[k]>max)
							{
								max=pack[i]+pack[j]+pack[k];
								packcolorchoose(i,0),packcolorchoose(j,1),packcolorchoose(k,2);
								strcpy(min,packcolor);
							}
							else if(pack[i]+pack[j]+pack[k]==max)
							{
								packcolorchoose(i,0),packcolorchoose(j,1),packcolorchoose(k,2);
								if(packcolor[0]<min[0])
								{
									strcpy(min,packcolor);
								}
								else if(packcolor[0]==min[0]&&packcolor[1]<min[1])
								{
									strcpy(min,packcolor);
								}
							}
					}
		printf("%s %d\n",min,sum-max);
	}
}
