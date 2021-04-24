/* codeforces.com/contest/1256/problem/B */

#include <stdio.h>
#include <stdlib.h>

/*
void solve(int n, int * a){
    int ttrack[n];
    int i, min = 1, j = 0, k = 0, tmp;
    for(i = 0; i < n; i++)
        ttrack[i] = 0;
    for(i = 0; i < n; i++){
        tmp = a[i];
        a[i] = a[k];
        a[k] = tmp;
        if(a[k] == min){
            ttrack[min-1] = 1;
            if(k == i) k++;
            else k = i;
            while (ttrack[j] && j < (n-1)) j++;
            min = j+1;
        }else{
            ttrack[a[i]-1] = 1;
        }
    }
    for(i = 0; i < n-1; i++)
        printf("%d ", a[i]);
    printf("%d\n",a[n-1]);
    return;
}
*/

void solve(int n, int * a){
    int ttrack[n];
    int i, k = 0, p = 0, j;
    int min = 1;
    for(i = 0; i < n; i++)
        ttrack[i] = 0;
    i = 0;
    while (i < n){
        //printf("i = %d \n", i);
        if(a[i] == min){
            //printf("here \n");
            ttrack[min-1] = 1;
            if(i == k){
                k++;
            }else{
                a[i] = a[i-1];
                j = i-1;
                while(j > k){
                    a[j] = a[j-1];
                    ttrack[a[j]-1] = 1;
                    j--;
                }
                a[k] = min;
                k = i;
                i--;
            }
            while (ttrack[p] && p < (n-1)) p++;
            min = p+1;
        }
        i++;
    }
    for(i = 0; i < n-1; i++)
        printf("%d ", a[i]);
    printf("%d\n",a[n-1]);
    return;
}

int main(){
    setbuf(stdout, NULL);
    int q, n, i, j;
    scanf("%d", &q);
    for(i = 0; i < q; i++){
        scanf("%d", &n);
        int t[n];
        for(j = 0; j < n; j++){
            scanf("%d", &t[j]);
        }
        solve(n, t);
    }
    return 0;
}