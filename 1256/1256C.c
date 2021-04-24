#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m, d, s, s1, s2 = 0, i, j, k;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &d);
    int c[m], r[n];
    d = d-1;
    s1 = d*(m+1);
    for(i = 0; i < m; i++){
        scanf("%d",c+i);
        s2 += c[i];
    }
    s = n - s2;
    if(s1 < s){
        printf("NO\n");
    }else{
        printf("YES\n");
        j = 0;
        for(i = 1; i < m+1; i++){
            if(s > d){
                for(k = 0; k < d; k++){
                    r[j] = 0;
                    j++;
                }
                s -= d;
                for(k = 0; k < c[i-1]; k++){
                    r[j] = i;
                    j++;
                }
            }else{
                for(k = 0; k < s; k++){
                    r[j] = 0;
                    j++;
                }
                while(i < m+1){
                    for(k = 0; k < c[i-1]; k++){
                        r[j] = i;
                        j++;
                    }
                    i++;   
                }
            }
        }
        while(j < n){
            r[j] = 0;
            j++;
        }
        for(i = 0; i < n-1; i++){
            printf("%d ", r[i]);
        }
        printf("%d\n", r[n-1]);
    }
    return 0;
}