#include <stdio.h>
#include <stdlib.h>

int main(){
    long int q, a, b, n, S;
    long int i, S2, S3, b2;
    scanf("%ld", &q);
    for(i = 0; i < q; i++){
        scanf("%ld", &a);
        scanf("%ld", &b);
        scanf("%ld", &n);
        scanf("%ld", &S);
        S2 = S / n;
        if(a <= S2){
            S = S - a * n;
        }else{
            S= S - S2 * n;
        }
        if(S > b){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
    return 0;
}