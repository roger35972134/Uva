#include<stdio.h>  
#include<algorithm>  
  
using namespace std;  
  
int R[555];  
  
int main() {  
    int T;  
    scanf("%d", &T);  
    while(T--) {  
        int r;  
        scanf("%d", &r);  
        for(int i = 0; i < r; i++)  
            scanf("%d", &R[i]);  
        sort(R, R+r);  
        int mid = R[r/2];  
        int sum = 0;  
        for(int i = 0; i < r; i++) {  
            if(R[i] > mid)  
                sum += R[i] - mid;  
            else   
                sum += mid - R[i];  
        }  
        printf("%d\n", sum);  
    }  
    return 0;  
}  
