#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
       int m;
       scanf("%d",&m);
       int v[1001],w[1001];
       for(int b=0;b<m;b++)
               scanf("%d%d",&v[b],&w[b]);
       int dp[35000];
       int p,ans=0;;
       scanf("%d",&p);
       for(int b=0;b<p;b++)
       {
               int x;
               scanf("%d",&x);
               memset(dp,0,sizeof(dp));
               for(int i=0;i<m;i++)
                       for(int j=x;j>=0;j--)
                       {
                            if(j>=w[i]) 
								dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
                       }
               ans+=dp[x];
       }
       printf("%d\n",ans);
    }
}
