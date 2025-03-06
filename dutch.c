#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int list[n - 1];
    for (int i = 0; i < n; i++){
        int k;
        scanf("\n%d", &k);
        list[i] = k;
    }
    for (int i = n - 1; i >= 0; i--){
        printf("%d\n", list[i]);
    }
}