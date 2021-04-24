#include <stdio.h>
#include <stdlib.h>

int main(){
    long int q, n, k, r;
    scanf("%ld", &q);
    for(r = 0; r < q; r++){
        scanf("%ld", &n);
        scanf("%ld", &k);
        char s[n];
        scanf("%s",s);
        char r[n];
        long i, cnt = 0;
        for(i = 0; i < n; i++){
            if(s[i] == '0'){
                if(k >= cnt){
                    s[i-cnt] = '0';
                    k -= cnt;
                }else{
					for(int j = 0; j < ; j++){

					}
                    r[i-k] = '0';
					for(j = i-k+1; j <= i; j++){
						r[j] = '1';
					}
					flag = 0;
                    break;
                }
            }else{
                cnt++;
            }
        }
		if(flag){

		}
        printf("%s\n", s);
    }
    return 0;
}