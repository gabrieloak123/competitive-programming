#include <stdio.h>

int main(){
    int qntArrays;

    scanf("%d", &qntArrays);

    for(int i = 0; i < qntArrays; i++){
        int tamArray, aux;
        int maior = 0;

        scanf("%d", &tamArray);
        int array[tamArray];
        
        for(int j = 0; j < tamArray; j++){ // leu os arrays
            scanf("%d", &aux);
            array[j] = aux;
        }

        for(int j = 0; j < tamArray; j++){ 
            int produto = array[j] + 1;

            for(int k = 0; k < tamArray; k++){
                if(k != j){
                    produto = produto * array[k];
                }
            }
            if(produto > maior){
                maior = produto;
            }
        }
        printf("%d\n", maior);
    }

    return 0;
}