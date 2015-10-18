#include <stdio.h>
#include <ctype.h>
char top[10000] ;
void check( int i )
{
	int j ;
	if( i==0 ) { }
	else
	{
		if( top[0]=='a' || top[0]=='e' || top[0]=='i' || top[0]=='o' || top[0]=='u' ||
			 top[0]=='A' || top[0]=='E' || top[0]=='I' || top[0]=='O' || top[0]=='U' )
			for( j=0 ; j<i ; j++ ) printf( "%c" , top[j] ) ;
		else
		{
			for( j=1 ; j<i ; j++ ) printf( "%c" , top[j] ) ;
			printf( "%c" , top[0] ) ;
		}
		printf( "ay" ) ;
	}
}
int main()
{
	int i=0 ; char a ;
	while( scanf( "%c" , &a )==1 )
	{
		if( isalpha( a ) ) { top[i] = a ; i++ ; }
		else { check( i ) ; i = 0 ; printf( "%c" , a ) ; }
	}
}
