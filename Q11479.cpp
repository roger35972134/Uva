#include<iostream>
#include<cmath>
int main()
{
    int T,a,b,c,count=0;
    
    scanf("%d",&T);
    
    for(int i=0; i<T;i++)
    {
        scanf(" %d %d %d",&a,&b,&c);
        
        if(abs(a-b)>=c || abs(a-c)>=b || abs(b-c)>=a ||a<=0||b<=0||c<=0)//?????????? 
            printf("Case %d: Invalid\n",++count);
        else
            if(a==b&&b==c)//????  ?????? 
                printf("Case %d: Equilateral\n",++count);
            else 
                if(a==b||b==c||a==c)//???? 
                    printf("Case %d: Isosceles\n",++count);
                else//?? 
                    printf("Case %d: Scalene\n",++count);
    }
    
}
