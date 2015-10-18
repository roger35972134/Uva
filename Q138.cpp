#include<stdio.h>
#include<stdlib.h>
unsigned int num[12]={0};
unsigned int math(int n)
{
  return num[n-1]*6-num[n-2];
}
unsigned int test(int n)
{
  int a;
  for(a=num[n]+1;;a++) 
     if(num[n]*(num[n]-1)/2==(num[n]+1+a)*(a-num[n])/2)
       return a; 
}   
main()
{
 int a;
 num[1]=6;
 num[2]=35;
 for(a=3;a<=10;a++) /*¤½¦¡*/
      num[a]=math(a);
 for(a=1;a<=10;a++)
   printf("%10lu%10lu\n",num[a],test(a)); 
 return 0;
}
