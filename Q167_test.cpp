
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAXSIZE 8

int sum;;
int answer;
int queen[MAXSIZE+1][MAXSIZE+1];
int left_diag[2*MAXSIZE+1];
int right_diag[2*MAXSIZE+1];
int column_map[MAXSIZE+1];

void max_queen(int sum)
{
  if(answer <sum)
     answer=sum;
     sum=0;              
}

void queens(int sum,int x)
{
   int j;  
  if(x>MAXSIZE){
    max_queen(sum); 
    }
  else{
      for(j=1;j<=MAXSIZE;j++){
        int R =x-j+MAXSIZE;
        int L=x+j;
         if(left_diag[L]&&right_diag[R]&&column_map[j]){                             
             left_diag[L]=right_diag[R]=column_map[j]=0;
             queens(sum +queen[x][j],x+1);
             left_diag[L]=right_diag[R]=column_map[j]=1;     
         }               
      }     
  }
       
}

int main()
{
    int i,j,data;
    scanf("%d",&data);
    while(data--){                         
            for(i=1;i<=MAXSIZE;i++){
                for(j=1;j<=MAXSIZE;j++){                                     
                 scanf("%d",&queen[i][j]); 
                }
            } 
        for(i=1;i<=2*MAXSIZE;i++)
           left_diag[i] = right_diag[i]=1;
           
          for(i=1;i<=MAXSIZE;i++)
            column_map[i]=1;
       answer=0;
       sum=0;     
       queens(0,1); 
       printf("%5d\n",answer);
   } 
   //return 0; 
    system("pause");    
}
