#include<iostream>
int f(int k)
{
   int m, n, p, r;

   for (n = 2 * k, m = 2;; m++) {
      for (p = 0, r = n; r > k; r--)
         if ((p = (p + m - 1) % r) < k) break;
      if (r == k) return m;
   }
}

int main()
{
    int icase;
    int i,ans[15];
    for(i=1;i<14;i++)
        ans[i]=f(i);
    while(scanf("%d",&icase)!=EOF,icase){
            printf("%d\n",ans[icase]);

    }
    return 0;
}
