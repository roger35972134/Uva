#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    int cas; scanf("%d",&cas);
    while ( cas-- ) {
        int n; scanf("%d",&n);
        int val[1001],w[1001];
        for ( int i=0; i<n; i++ ) scanf("%d%d",&val[i],&w[i]);
        int dp[35000];
        int g; scanf("%d",&g);
        int ans=0;
        while ( g-- ) {
            int x; scanf("%d",&x);
            memset(dp,0,sizeof(dp));
            for ( int i=0; i<n; i++ ) {
                for ( int j=x; j>=0; j-- ) {
                    if ( j>=w[i] ) dp[j]=max(dp[j],dp[j-w[i]]+val[i]);    
                }    
            }
            ans+=dp[x];           
        }
        printf("%d\n",ans);
    }
    return 0;
}
