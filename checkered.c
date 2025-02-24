#include <stdio.h>

int main(void){
    int squares;
    scanf("%d", &squares);

    for (int i = 0; i < 2*squares; i++){
        for (int j = 0; j < squares; j++){
            if ((i / 2 + j) % 2 == 0){
                printf("%s", "##");
            }else{
                printf("%s", "..");
            }
        }
        printf("\n");
    }
}