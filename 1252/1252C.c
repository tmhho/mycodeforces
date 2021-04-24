/* http://codeforces.com/problemset/problem/1252/C */

#include <stdio.h>
#include <stdlib.h>

int main(){
    setbuf(stdout, NULL);
    int N, Q, r1, c1, r2, c2, tmp, current_bit, cmpt;
    scanf("%d %d",&N, &Q);
    int i, R[N], C[N];
    cmpt = 0;
    scanf("%d",&current_bit);
    current_bit &= 1;
    R[0] = 0;
    for(i = 1 ; i< N; i++){
        scanf("%d",&tmp);
        tmp = tmp & 1;
        cmpt += tmp ^ current_bit;
        R[i] = cmpt;
        current_bit = tmp;
    }
    cmpt = 0;
    scanf("%d",&current_bit);
    current_bit &= 1;
    C[0] = 0;
    for(i = 1 ; i< N; i++){
        scanf("%d",&tmp);
        tmp = tmp & 1;
        cmpt += tmp ^ current_bit;
        C[i] = cmpt;
        current_bit = tmp;
    }
    for(i = 0; i < Q; i++){
        scanf("%d",&r1);
        scanf("%d",&c1);
        scanf("%d",&r2);
        scanf("%d",&c2);
        if ((R[r1-1] == R[r2-1]) && (C[c1-1] == C[c2-1])){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}