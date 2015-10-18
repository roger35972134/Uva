#include<iostream>
#include<string.h>
using namespace std;
char strfirst[100];
bool mirror(int len)
{
	char mir[21][2];
	char strsecond[100];
	int count=0;
	mir[0][0] = 'A'; mir[0][1] = 'A';
	mir[1][0] = 'E'; mir[1][1] = '3';
	mir[2][0] = 'H'; mir[2][1] = 'H';
	mir[3][0] = 'I'; mir[3][1] = 'I';
	mir[4][0] = 'J'; mir[4][1] = 'L';
	mir[5][0] = 'M'; mir[5][1] = 'M';
	mir[6][0] = 'O'; mir[6][1] = 'O';
	mir[7][0] = 'S'; mir[7][1] = '2';
	mir[8][0] = 'T'; mir[8][1] = 'T';
	mir[9][0] = 'U'; mir[9][1] = 'U';
	mir[10][0] = 'V'; mir[10][1] = 'V';
	mir[11][0] = 'W'; mir[11][1] = 'W';
	mir[12][0] = 'X'; mir[12][1] = 'X';
	mir[13][0] = 'Y'; mir[13][1] = 'Y';
	mir[14][0] = 'Z'; mir[14][1] = '5';
	mir[15][0] = '1'; mir[15][1] = '1';
	mir[16][0] = '2'; mir[16][1] = 'S';
	mir[17][0] = '3'; mir[17][1] = 'E';
	mir[18][0] = '5'; mir[18][1] = 'Z';
	mir[19][0] = '8'; mir[19][1] = '8';
	mir[20][0] = 'L'; mir[20][1] = 'J';
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<21;j++)
		{
			if(strfirst[i]==mir[j][0])
			{
				strsecond[i]=mir[j][1];
				break;
			}
		}
	}
	for(int i=0;i<len;i++)
	{
		if(strfirst[i]!=strsecond[len-i-1])
			return false;
	}
	return true;
}
bool palindrome(int len)
{
	for(int i=0;i<len/2;i++)
	{
		if(strfirst[i]!=strfirst[len-1-i])
			return false;
	}
	return true;
}
int main()
{
	while(cin >> strfirst)
	{
			bool palinFlag = palindrome(strlen(strfirst));
			bool mirFlag = mirror(strlen(strfirst));
			if (palinFlag == false && mirFlag == false)
				cout << strfirst << " -- is not a palindrome.\n\n";
			else if (palinFlag == true && mirFlag == false)
				cout << strfirst << " -- is a regular palindrome.\n\n";
			else if (palinFlag == false && mirFlag == true)
				cout << strfirst << " -- is a mirrored string.\n\n";
			else if (palinFlag == true && mirFlag == true)
				cout << strfirst << " -- is a mirrored palindrome.\n\n";
	}
	
}


















