#include<iostream>
using namespace std;
int main()
{
	int tri[3];
	while(scanf("%d%d%d",&tri[0],&tri[1],&tri[2])!=EOF,tri[0])
	{
		for(int i=0;i<2;i++)
			for(int j=0;j<2-i;j++)
				if(tri[j]>tri[j+1])
					swap(tri[j],tri[j+1]);
		
		if(tri[0]*tri[0]+tri[1]*tri[1]==tri[2]*tri[2])
			printf("right\n");
		else
			printf("wrong\n");
	}
}
