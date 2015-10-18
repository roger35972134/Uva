#include<iostream>
#include<map>
#include<cctype>
#include<string>

using namespace std;

int main()
{
	int i=0;
	char c,in[10000];
	map<string,int> word;
	map<string,int>::iterator p;
	while((c=getchar())!=EOF)
	{
		if(!isalpha(c))
		{
			in[i]='\0';
			string x(in);
			if(!x.empty())
				word[x];
			i=0;
		}
		else
		{
			c=tolower(c);
			in[i++]=c;
		}
	}
	in[i]='\0';
	string x(in);
	if(x.empty())
		word[x];
	for(p=word.begin();p!=word.end();++p)
		cout << p->first<<endl;
	return 0;
}
