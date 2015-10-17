#include<iostream>
#include<cstdlib>
#include<climits>
using namespace std;
int main(){
	int n;
	//cout << "N*N matrix by N: ";
	while(scanf("%d",&n)!=EOF)
	{
		int matrix[n][n];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin >> matrix[i][j];
		int max=INT_MIN,count=0;
		for(int height=1;height<=n;height++)
			for(int width=1;width<=n;width++)
			{
				for(int i=0;i<n-height+1;i++)//¦¸¼Æ 
					for(int j=0;j<n-width+1;j++)
					{
						int sum=0;
						for(int l=i;l<i+height;l++)
						{	
							for(int k=j;k<j+width;k++)
							{
								sum+=matrix[k][l];
							}
						}
						if(sum>max)
							max=sum;
					}
			}
		/*for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				cout << matrix[i][j] << " ";
				cout << endl;
			}*/
		cout << max << endl;
	}
}
