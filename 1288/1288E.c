#include <stdio.h>
#include <stdlib.h>

int main(){
    long n, m;
    scanf("%ld", &n);
    scanf("%ld", &m);
    int b[n];
    for(int i = 0; i < n; i++){
        b[i] = 0;
    }
    long a[m];
    long i;
    for(i = 0; i < m; i++){
        scanf("%ld", a[m-i-1]);
    }
    for(i = 0; i < m; i++){
        if(b[a[i]] == 0){
            b[a[i]] = 1;
        }
    }
    


    return 0;
}