#include <stdio.h>

int main(void){
    int q, T, a, b, d, k;
    char s[100000];
    scanf("%d", &q);
    scanf("%s", s);

    for (int i = 0; i < q; i++){
        scanf("%d", &T);
        if (T == 0){
            scanf(" %d %d %d", &a, &b, &d);
            for (int j = a; j <= b; j++){
                if (d == 0){
                    s[j] = (s[j] == 'a') ? 'z' : s[j] - 1;
                } else{
                    s[j] = (s[j] == 'z') ? 'a' : s[j] + 1;
                }
            }
        } else if (T == 1){
            scanf(" %d", &k);
            printf("%c", s[k]);
            if (i < q - 1){
                printf("\n");
            }
        }
    }
}