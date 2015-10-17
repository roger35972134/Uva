#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int k,n;
	while(scanf("%d %d",&k,&n)!=EOF){
	int box[k][n];
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<n;j++)
		{
			int input;
			scanf("%d",&input);
			box[i][j]=input;
		}
	}
	for(int l=0;l<k;l++)//sort n
		for(int i=0;i<n-1;i++)
			for(int j=0;j<n-i-1;j++)
				if(box[l][j]>box[l][j+1])
				{
					int temp=box[l][j];
					box[l][j]=box[l][j+1];
					box[l][j+1]=temp;
				}
	int min[k];
	for(int i=0;i<k;i++)
		min[i]=i;
	for(int l=0;l<k-1;l++)//sort k,sort original number
			for(int j=0;j<k-l-1;j++)
				for(int m=0;m<n;m++)
					if(box[j][m]>box[j+1][m])
						{
							bool flag=true;
							for(int o=0;o<m;o++)
								if(box[j][o]<box[j+1][o])
									flag=false;
							if(flag)
							{
								int tmp=min[j];
								min[j]=min[j+1];
								min[j+1]=tmp;
								for(int i=0;i<n;i++)
								{
									int temp=box[j][i];
									box[j][i]=box[j+1][i];
									box[j+1][i]=temp;
								}
							}
						}
	int count=0,ken;
	for(int i=0;i<k;i++)
	{
		ken=1;
		for(int j=0;j<n;j++)
		{	
			bool flag=true;
			for(int m=i;m<k;m++)
				if(box[i][j]>=box[i+ken][j])
				{
					m=i;
					flag=false;
					ken++;
				}
			if(box[i][j]<box[i+1][j]&&j==n-1)
				{
					count++;
				}
		}
	}
	cout << count << endl;
	for(int i=0;i<k;i++)
	{
		ken=1;
		for(int j=0;j<n;j++)
		{	
			bool flag=true;
			for(int m=i;m<k;m++)
				if(box[i][j]>=box[i+ken][j])
				{
					m=i;
					flag=false;
					ken++;
				}
			if(box[i][j]<box[i+1][j]&&j==n-1)
				{
					cout << min[i]+1 << " ";
				}
		}
	}
	cout << endl;
	}
}
