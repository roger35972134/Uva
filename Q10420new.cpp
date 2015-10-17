#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int cmp(const void *a, const void *b){
	return strcmp( (char*) a, (char*) b);
}

int main()
{
	char str[2200][100];
	char temp[100];
	int input;
	int i,j;
	
	cin >>input;

	for(i=0;i<input;i++)
	{
		cin >> str[i];
		cin.getline(temp,sizeof(temp));//to ignore name
	}
	
	qsort(str,input,sizeof(str[0]),cmp);
	int count;
	for(int i=0;i<input;i+=count)
	{
		count=0;
		//printf("%s ",str[i]);
		cout << str[i] << " ";
		for(j=i;j<input;j++)
			if(strcmp(str[i],str[j])==0)
				++count;
		cout << count << endl; 
	} 
}
