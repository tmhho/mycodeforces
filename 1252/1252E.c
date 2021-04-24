#include <stdio.h>
#include <stdlib.h>

int main(){
    long long N, L, R, K, i, min, max;
    scanf("%lld", &N);
    scanf("%lld", &L);
    scanf("%lld", &R);
    scanf("%lld", &K);
    long long x[N];
    for(i = 0; i < N; i++){
        scanf("%lld", x+i);
    }
    long long y[N];
    y[0] = x[0];
    min = x[0];
    max = x[0];
    for(i = 1; i < N; i++){
        if(x[i] == x[i-1]){
            y[i] = y[i-1];
        }else{
            if(x[i] > x[i-1]){
                y[i] = y[i-1] + 1;
                if(y[i] > max){
                    max = y[i];
                }
            }else{
                y[i] = y[i-1] - 1;
                if(y[i] < min){
                    min = y[i];
                }
            }
        }
    }
    for(i = 0; i < N; i++){
        printf("%lld ", y[i]+L);
    }
    printf("\n");
    if((max - min) <= (R - L)){
        for(i = 0; i < N; i++){
            printf("%lld ", y[i]+L);
        }
        printf("\n");
    }else{
        printf("%d",-1);
    }
    return 0;
}