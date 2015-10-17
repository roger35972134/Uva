#include <stdio.h>
#define MAX 100
struct Robots
{
    int x;
    int y;
    char face;   
};
struct Robots r;
struct Robots scent[MAX];
int isInSite (int x, int y);
void changeFace (char ch);
int move ();
void back ();
int topX, topY, index = 0;
int main()
{
    scanf("%d %d",&topX ,&topY);
    while (1)
    {
        char ch ,str[100];
        int inSite = 1, i;  
        if (scanf("%d %d %c\n",&r.x ,&r.y ,&r.face) < 3) break;
        gets(str);
        for (i = 0; str[i];i ++)
        {
            if (!inSite) break;
            if (str[i] == '\n') break;
            if (str[i] == 'F') inSite = move();
            else changeFace(str[i]);
        }
        if (inSite)
            printf("%d %d %c\n",r.x ,r.y , r.face);
        else
            printf("%d %d %c LOST\n",r.x ,r.y , r.face);    
    }
    
    return 0;
}

int isInSite (int x, int y)
{
    if (topX >= x && x >= 0 && topY >= y && y >= 0) 
       return 1;
    return 0;
}

void changeFace (char ch)
{
    if (ch == 'R')
        if (r.face == 'N') r.face = 'E';
        else if (r.face == 'E') r.face = 'S';
        else if (r.face == 'S') r.face = 'W';
        else r.face = 'N';
    else 
        if (r.face == 'N') r.face = 'W';
        else if (r.face == 'W') r.face = 'S';
        else if (r.face == 'S') r.face = 'E';
        else r.face = 'N'; 
}

void back ()
{
    if (r.face == 'N') r.y --;
    else if (r.face == 'E') r.x --;  
    else if (r.face == 'S') r.y ++;
    else r.x ++; 
}

int move ()
{
    int i, isInScent = 0;
    if (r.face == 'N') r.y ++;    
    else if (r.face == 'E') r.x ++;  
    else if (r.face == 'S') r.y --;
    else r.x --;
    
    if (isInSite(r.x, r.y))
       return 1;
    else
    {
       back();
       for (i = 0; i < index; i ++)
           if (scent[i].x == r.x && scent[i].y == r.y)
           {
              isInScent = 1;
              break;
           } 
       if (isInScent)    
          return 1;
       else
       {       
          scent[index].x = r.x, scent[index].y = r.y, index ++;
          return 0;
       }
    } 
}
