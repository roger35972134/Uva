#include<iostream>
#include<cstdlib>
#include <stdio.h>
using namespace std;
/*void zero(int array[],int n)
{
	for(int i=0;i<n;i++)
	{
		array[i]=0;
	}
}*/
int main(void)
{
	int count=0, move[100];
	for(int i=0;i<100;i++)
		{
			move[i]=0;
		}
	while (1)
	{
		static int sum = 0,average,n,hi[100];
		for(int i=0;i<n;i++)
		{
			hi[i]=0;
		}
		cin >> n;
		if(n==0)
			break;
		
		while (n > 50 || n < 1)
		{
			cin >> n;
		}
		
		for (int i = 0; i < n; i++)
		{
			cin >> hi[i];
			while (hi[i] > 100 || hi[i] < 1)
			{
				cin >> hi[i];
			}
			sum += hi[i];
		}
		average = sum / n;
		
		for (int i = 0; i < n; i++)
		{
			if (hi[i]>average)
			{
				move[count] += hi[i] - average;
			}
		}
		count++;
	}
	for (int i = 0; i < count; i++)
	{
		if(i==count-1)
		printf("Set #%d\nThe minimum number of moves is %d.\n", i + 1,move[i]);
		printf("Set #%d\nThe minimum number of moves is %d.\n\n", i + 1,move[i]);
	}
}
