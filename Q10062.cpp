#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  char array[1001]; 
  int first=0; 

  while(gets(array)!=NULL)
  {
     int number[256]={0};
     int length; 
     int i,j;
  
     if(first) 
       printf("\n");
      first =1;
     length =strlen(array);                 
     
     for(i =0;i<length;i++)
     {
       number[array[i]]++;  
     }
     
      for(i=1;i<=length;i++)
      {             
       for(j=255;j>0;j--)
       {          
         if(number[j]==i)
         { 
           printf("%d %d\n",j,i);
         }
       } 

     }     
  }
}
