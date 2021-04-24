#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int flag;
    long t, i, n;
    long p, a, c;
    scanf("%ld",&t);
    for(i = 0; i <  t; i++){
        flag = 0;
        scanf("%ld",&n);
        p = 2;
        while(p < cbrt(n)){
            if(n % p == 0){
                a = p;
                n = n / p;
                p++;
                while(p < sqrt(n)){
                    if(n % p == 0){
                        c = n / p;
                        flag = 1;
                        printf("YES\n");
                        printf("%ld %ld %ld\n", a, p, c);
                        break;
                    }
                    p++;
                }
                break;
            }
            p++;
        }
        if(flag == 0) printf("NO\n");
    }
    
    return 0;
}