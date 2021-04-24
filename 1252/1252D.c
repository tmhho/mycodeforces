#include <stdio.h>
#include <stdlib.h>

struct char_array{
    char c;
    struct char_array * right;
    struct char_array * down;
};

typedef struct char_array * carray_t;

int main(){
    int R, C, Q, i, j, n, k;
    scanf("%d",&R);
    scanf("%d",&C);
    scanf("%d",&Q);
    char tmp[C];
    carray_t tab = malloc(R*C*sizeof(struct char_array));
    for(i = 0; i < R; i++){
        scanf("%s",&tmp);
        for(j =0; j < C; j++){
            n = i*C+j;
            tab[n].c = tmp[j];
            tab[n].right = &(tab[n+1]);
            tab[n].down = &(tab[n+C]);
        }
    }
    for(i = 0; i < R; i++){
        tab[i*C+C-1].right = NULL;
    }
    for(j = 0; j < C; j++){
        tab[(R-1)*C+j].down = NULL;
    }

    char * s = malloc(sizeof(char)*10);
    char * ps, * p2;
    carray_t pt, pt2;
    for(k = 0; k < Q; k++){
        scanf("%s",s);
        int cmpt = 0;
        for(i=0; i < R; i++){
            for(j = 0; j < C; j++){
                if(tab[i*C+j].c == s[0]){
                    ps = s;
                    pt = tab+i*C+j;
                    while( (*ps != '\0') && (pt != NULL)){
                        if(pt->c != *ps){
                            break;
                        }
                        else{
                            p2 = ps+1;
                            pt2 = pt->down;
                            if(* p2 == '\0'){
                                cmpt++;
                                break;
                            }
                            while((* p2 != '\0') && (pt2 != NULL)){
                                if(pt2->c != *p2) break;
                                pt2 = pt2->down;
                                p2 += 1;
                            }
                            if (* p2 == '\0') cmpt++;
                        }
                        ps = ps+1;
                        pt = pt->right;
                    }
                }
            }
        }
    printf("%d\n", cmpt);
    }
    return 0;
}