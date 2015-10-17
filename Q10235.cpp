#include<iostream>
#include<cmath>
#include<stdlib.h>
bool num[1000005];
int main()
{
	for(int i=0;i<1000005;i++)
		num[i]=true;
	for ( int i = 2; i < 1000004; i++ )
        for ( int j = i * 2; j < 1000004; j += i )
            num[j] = false;
	/*for(int i=2;i<1000004;i++)
		for(int j=2;j<=sqrt(i);j++)
			if(i%j==0)
			{
				num[i]=false;
				break;
			}*/
	
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if ( num [n] == false )
            printf ("%d is not prime.\n", n);
        else
        {
        	char reverse[10];
        	int i=0,s=n;
        	while(n)
        	{
        		reverse[i++]=(n%10)+'0';
        		n/=10;
			}
			reverse[i]=0;
			n=atoi(reverse);
			if(num[n]&&n!=s)
				printf ("%d is emirp.\n", s);
            else
                printf ("%d is prime.\n", s);
		}
	}
}
