#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int num,count=0;
	int array[10000];
	while(scanf("%d",&array[count])!=EOF)
	{
		sort(array,array+count+1);
		count++;
		if(count%2==1)
		{
			cout << array[count/2]<<endl;
		}
		else
		{
			cout << (array[count/2]+array[count/2-1])/2<<endl;
		}
		
	}
}
