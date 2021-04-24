/* http://codeforces.com/problemset/problem/1243/C */
/* If n = r*s where gcd(r,s) = 1, return 1. 
If n = p^k, return p. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    unsigned long long i;
    unsigned long long n;
    scanf("%llu",&n);
    if(n <= 3){
        printf("%llu\n",n);
        return 0;
    }
    for(i = 2; i*i <= n; i++){
        if(n % i == 0) break;
    }
    if((n % i) != 0){
        printf("%llu\n",n);
        return 0;
    }
    while((n % i) == 0) n = n/i;
    if(n == 1){printf("%llu\n",i);}
    else{printf("%d\n",1);}
    return 0;
}