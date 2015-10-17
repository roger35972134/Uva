#include<cstdio>  
#include<cmath>  
#include<cstring>  
#define maxn 65000  
#define maxm 65100  
using namespace std;  
int prime[maxm];  
  
void init() {  
  
    int end = (int)sqrt(maxn) + 1;  
    memset(prime,-1,sizeof(prime));  
    for(int i = 2; i < end; i++)  
        if(prime[i])   
            for(int j = i * i; j < maxn; j += i)  
                prime[j] = 0;  
}  
  
long long pmd(int a, int n, int m) {  
    long long ans;  
    if(n == 1)  
        return a % m;  
    ans = pmd(a,n/2,m);  
    ans = (ans * ans) % m;  
    if(n % 2)  
        return (ans*a) %m;  
    else  
        return ans;  
}  
  
int check(int N) {  
    if(prime[N])  
        return 0;  
    for(int i = 2; i < N; i++)  
        if(pmd(i,N,N) != i)  
            return 0;  
    return 1;  
}  
int main() {  
  
    int N;  
    init();  
    while(scanf("%d",&N) != EOF && N) {   
        if(!check(N))  
            printf("%d is normal.\n",N);              
        else  
            printf("The number %d is a Carmichael number.\n",N);  
    }  
    return 0;  
}
