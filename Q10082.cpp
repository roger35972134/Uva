#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char ch,key[]={'`','1','2','3','4','5','6','7','8','9','0','-','=',
				'Q','W','E','R','T','Y','U','I','O','P','[',']','\\',
				'A','S','D','F','G','H','J','K','L',';','\'',
				'Z','X','C','V','B','N','M',',','.','/','\0'};
	int lengh=strlen(key);
	while(ch!=EOF)
	{
		while((ch=getchar())!='\n')
		{
			if(ch==' ') cout << " ";
			else
			{
				for(int i=0;i<lengh;i++)
					if(ch==key[i])
						cout << key[i-1];
			}
		}
		printf("\n");
		ch=getchar();
		if(ch!=EOF) ungetc(ch,stdin);
	}
}
