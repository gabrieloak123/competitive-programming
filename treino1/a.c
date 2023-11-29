#include <stdio.h>

int main(){
    int brinquedos, alturaMenino, alturaBrinquedo, brinquedosPermitidos;

    scanf("%d %d", &brinquedos, &alturaMenino);

    for(int i = 0; i < brinquedos; i++){
        scanf("%d", &alturaBrinquedo);
        if(alturaMenino >= alturaBrinquedo){
            brinquedosPermitidos++;
        }
    }
    printf("%d", brinquedosPermitidos);
}