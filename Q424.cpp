#include<stdio.h>
#include<string.h>

#define NUMLEN 200

struct AddNum
{
	int num[NUMLEN];
	int length;
};

struct AddNum AN1,AN2;
char numStr[101];

int main()
{
	int i,j;
	while(gets(numStr))
	{
		if(numStr[0]=='0') break;
		AN2.length=strlen(numStr)-1;
		for(i=AN2.length,j=0;i>=0;i--,j++)
			AN2.num[j]=numStr[i]-'0';
		for(i=0;i<NUMLEN;i++)
		{
			AN1.num[i]+=AN2.num[i];
			if(AN1.num[i]>=10)
				AN1.num[i+1]++,AN1.num[i]%=10;
		}
	}
	for(i=NUMLEN-1; ;i--)
		if(AN1.num[i]>0)
			break;
	for(;i>=0;i--)
		printf("%d",AN1.num[i]);
	printf("\n");
	return 0;
}
