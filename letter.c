#include <stdio.h>

int main(void){
    int q, a, b, d;
    char s[100000];
    scanf("%d", &q);
    scanf("%s", s);
    
    for (int i = 0; i < q; i++){
        scanf("%d %d %d", &a, &b, &d);
        for (int j = a; j <= b; j++){
            if (d == 0){
                s[j] = (s[j] == 'a') ? 'z' : s[j] - 1;
            } else{
                s[j] = (s[j] == 'z') ? 'a' : s[j] + 1;
            }
        }
    }

    printf("%s", s);
}