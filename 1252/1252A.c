#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, tmp, i, tmp2;
    scanf("%d", &N);
    scanf("%d", &tmp);
    for(i = 1; i < N; i++){
        scanf("%d",&tmp2);
        printf("%d ",tmp2);
    }
    printf("%d\n",tmp);        
    return 0;
}