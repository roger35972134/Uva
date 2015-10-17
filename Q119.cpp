#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define MAX_P 10
#define MAX_LEN 12

int n;
char names[MAX_P][MAX_LEN+1];

int findname(char *name);

int main(){
  int i, j, k, flag;
  int gift, taker, net[MAX_P];
  char s[MAX_LEN+1];
  
  flag = 0;
  while( scanf("%d", &n) != EOF ){
    if( flag == 1 )
      printf("\n");
    
    for(i=0; i<n; i++){
      scanf("%s", names[i]);
      net[i] = 0;
    }
    
    for(i=0; i<n; i++){
      scanf("%s %d %d", s, &gift, &taker);
      k = findname(s);
      
      if( taker != 0 ){
        net[k] -= gift;
        net[k] += (gift % taker);
        gift /= taker;
      }
      
      for(j=0; j<taker; j++){
        scanf("%s", s);
        k = findname(s);
        net[k] += gift;
      }/*j: give gift to taker*/
    }/*i*/
    
    for(i=0; i<n; i++)
      printf("%s %d\n", names[i], net[i]);
    
    flag = 1;
  }/*while more groups data*/
  
  exit(0);
}

int findname(char *s){
  int i;
  
  for(i=0; i<n; i++)
    if( strcmp(s, names[i]) == 0 )
      return i;
}
