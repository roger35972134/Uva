#include<stdio.h>
#include<math.h>
double xa,xb,ya,yb,xc,yc,a,b,c,s,line;
int main()
{
  while(scanf("%lf %lf %lf %lf %lf %lf",&xa,&ya,&xb,&yb,&xc,&yc)==6)//®üÀs¤½¦¡ 
  {
    a=sqrt( (xa-xb)*(xa-xb)+(ya-yb)*(ya-yb) );
    b=sqrt( (xa-xc)*(xa-xc)+(ya-yc)*(ya-yc) );
    c=sqrt( (xb-xc)*(xb-xc)+(yb-yc)*(yb-yc) );
    s=(a+b+c)/2;
    line=a*b*c/sqrt(s*(s-a)*(s-b)*(s-c))/4;
    printf("%.2lf\n",2*3.141592653589793*line);
  }
  return 0;
}
