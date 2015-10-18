#include <iostream>
#include<string.h>
using namespace std;
 
enum { MAX_M = 100, MAX_VAL = 500, MAX_SUM = MAX_VAL*MAX_M };
 
int main(){
    int n, m, c[MAX_M];
    int i, j, t, sum, half, p[MAX_SUM+1] = {};
 
    scanf("%d", &n);
    for(; n>0; --n){
        scanf("%d", &m);
        sum = 0;
        for(i=0; i<m; ++i){
            scanf("%d", &c[i]);
            sum += c[i];
        }
        half = sum / 2;
 
        for(i=0; i<m; ++i) //all coins
            for(j=half; j>=c[i]; --j)
                p[j] = max(p[j], p[j-c[i]]+c[i]);
 
        cout << (((t = 2 * p[half] - sum) > 0) ? t : -1*t ) << endl;
        memset(p, 0, sizeof(p));
    }//n inputs
 
    return 0;
}
