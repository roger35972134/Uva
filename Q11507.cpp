#include<iostream>
#include<cstdio> 
using namespace std;

int main()
{
	int L;
	bool sign;
	char ch1,ch2,current;
	while(scanf("%d\n",&L),L)
	{
		sign=true,current='x';
		while(--L)
		{
			ch1 = getchar(),ch2 = getchar(),getchar();
			if(ch1=='N')
				continue;
			if(current=='x')
			{
				sign=!(sign ^ (ch1=='+'));
				current=ch2;
			}
			else if(ch2==current)
			{
				sign=sign ^ (ch1=='+');
				current='x';
			}
		}
		if(sign)
			putchar('+');
		else
			putchar('-');
		putchar(current);
		putchar(10);
	}
	return 0;
}
