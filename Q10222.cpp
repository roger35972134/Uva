#include<stdio.h>
#include<stdlib.h>
 
int main()
{
    char temp;
    char map[47]={ '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 45, 61,
                   'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 91, 93, 92,
                   'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 59, 39,
                    'z', 'x', 'c', 'v', 'b', 'n', 'm', 44, 46, 47};
    int i;
    
     
    while(scanf("%c",&temp)!=EOF){
        if(temp==' ')
            printf(" ");
        else if(temp=='\n')
            printf("\n");
        else{   
            for(i=0;i<47;i++){
                if(temp==map[i]){
                    printf("%c",map[i-2]);
                    break;
                }
            }
        }
    }
 
    return 0;
}
