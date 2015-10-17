#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
typedef struct
{
    char str[25]; //????
    char lowStr[25]; //????????
    int anng; //???Ananagrams
}STR;
 
int charcmp( const void *a, const void *b ) //???????
{
    return *( char* )a - *( char* )b;
}
 
int alphacmp( const void *a, const void *b ) //?????
{
    STR *pa = (STR*)a;
    STR *pb = (STR*)b;
 
    return strcmp(pa->str, pb->str);
}
 
int main()
{
    STR word[1010];
    int i, j;
    int count = 0, checkEnd = 0;
 
    while(1)
    {
        if(checkEnd) break;
 
        memset(word[count].str, 0, sizeof(word[count].str)); //?????
        memset(word[count].lowStr, 0, sizeof(word[count].str)); //?????
        word[count].anng = 0; //??anng??0(????Ananagrams)
 
        scanf("%s",word[count].str);
 
        if(strcmp(word[count].str, "#") == 0) // # ??????,??break???
        {
            break;
        }
 
        else if(word[count].str[strlen(word[count].str)-1] == '#')
        /* #????????????,???????,????#???????word.str??*/
        {
            char temp[25];
            strncpy(temp, word[count].str, strlen(word[count].str)-1);
            memset(word[count].str, 0, sizeof(word[count].str));
            strcpy(word[count].str, temp);
            checkEnd++; //??#???,???????while??????????,????
        }
 
        for(i = 0 ; i < strlen( word[count].str ) ; i++) //?????????
        {
            word[count].lowStr[i] = tolower( word[count].str[i] );
        }
 
        qsort(word[count].lowStr, strlen( word[count].lowStr ) , sizeof(char), charcmp); //????
 
        for(i = 0 ; i < count ; i++)
        {
            if(strlen(word[count].lowStr) > 1) //??????????Ananagrams,?????
            {
                if(strcmp(word[count].lowStr, word[i].lowStr) == 0) //???Ananagrams
                {
                    word[count].anng++;
                    word[i].anng++;
                    break;
                }
            }
        }
        count++;
    }
 
    qsort(word, count, sizeof(STR), alphacmp); //???????????
 
    for(i = 0 ; i < count ; i++)
    {
        if(word[i].anng == 0) //???Ananagrams???
        {
            puts(word[i].str);
        }
    }
 
    return 0;
}
