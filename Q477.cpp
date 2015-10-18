#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
 char s[5];
 int n=0;
 double map[11][4];
 int cr[11];
 while(1)
  {
   scanf("%s",s);/*不喜歡用%C 因為常常錯誤*/
   if(s[0]=='*') break;
   if(s[0]=='r')
    {
     scanf("%lf %lf %lf %lf",&map[n][0],&map[n][1],&map[n][2],&map[n][3]);
     cr[n]=1;
    } 
   else
    {
      scanf("%lf %lf %lf",&map[n][0],&map[n][1],&map[n][2]);
      cr[n]=0;
    }  
   n++; 
  }
  int a,b,c,m=0;
  double x,y; 
  while(1)
   {
     scanf("%lf %lf",&x,&y);
     if(x==9999.9&&y==9999.9) break;
     int flag=0;
     m++;
     for(a=0;a<n;a++)
      {
       if(cr[a]==1&&x>map[a][0]&&x<map[a][2]&&y<map[a][1]&&y>map[a][3]) 
        {printf("Point %d is contained in figure %d\n",m,a+1);flag=1;} 
       if(cr[a]==0&&sqrt((x-map[a][0])*(x-map[a][0])+(y-map[a][1])*(y-map[a][1]))<map[a][2]) 
        {printf("Point %d is contained in figure %d\n",m,a+1);flag=1;}  
      }
     if(flag==0)
      printf("Point %d is not contained in any figure\n",m);  
   } 
 return 0;
}
