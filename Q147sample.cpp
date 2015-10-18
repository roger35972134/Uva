#include<stdio.h>
#include<stdlib.h>
long long int dollars[30001]={0};
main()
{
 int a,b,money[11]={10000,5000,2000,1000,500,200,100,50,20,10,5};
 dollars[0]=1;
 for(a=0;a<11;a++)
    for(b=money[a];b<=30000;b++)
       dollars[b]+=dollars[b-money[a]];
 int n,m;
 while(scanf("%d.%d",&n,&m)==2)
   {
     if(n==0&&m==0) break;
   printf("%3d.%02d%17lld\n",n,m,dollars[n*100+m]);
   }
 return 0;
}
