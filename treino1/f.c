#include <stdio.h>

int main(){
    int qntMeses, aux, diaDoMeio;
    int mesCorrespondente = 0;
    int totalDias = 0;

    scanf("%d", &qntMeses);
    int diasPorMes[qntMeses];

    for(int j = 0; j < qntMeses; j++){ // leu os arrays
            scanf("%d", &aux);
            diasPorMes[j] = aux;
            totalDias += aux;
    }

    diaDoMeio = totalDias / 2 + 1;
    
    for(int i = 0; i < qntMeses; i++){
        if(diaDoMeio >= diasPorMes[i]){
            diaDoMeio -= diasPorMes[i];
            mesCorrespondente++;

            if(diaDoMeio == 0){
                printf("%d %d", mesCorrespondente, diasPorMes[i]);
                break;
            }
        }
        else if ( diaDoMeio - diasPorMes[i] < 0){
            printf("%d %d", mesCorrespondente, diaDoMeio);
            break;
        }
        
        
    }
    return 0;
}