#include<iostream>
#include<cstdlib>
using namespace std;
int sort(int n,int array[])
{
	/*for(int i=0;i<n-1;i++)
		for(int (j=0;j<n-i-1;j++)
			if(array[j]>array[j+1])
				{
					int 
				}*/
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(max<array[i])
			max=array[i];
	}
	return max;
}
int main()
{
	int n;
	while(cin >> n){
		for(int i=1;i<=n;i++)
		{
			int num;
			cin >> num;
			int clown[num];
			for(int j=0;j<num;j++)
			cin >> clown[j];
			cout << "Case " << i << ": " << sort(num,clown) << "\n";
		}
	
	}
	system("pause");
}
