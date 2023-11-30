#include <stdio.h>

int main() {
    int qntMeses, aux, diaDoMeio;
    int mesCorrespondente = 1;
    int totalDias = 0;

    scanf("%d", &qntMeses);
    int diasPorMes[qntMeses];

    for (int j = 0; j < qntMeses; j++) {
        scanf("%d", &aux);
        diasPorMes[j] = aux;
        totalDias += aux;
    }

    diaDoMeio = totalDias / 2 + 1;

    for (int i = 0; i < qntMeses; i++) {
        if (diaDoMeio <= diasPorMes[i]) {
            printf("%d %d\n", mesCorrespondente, diaDoMeio);
            break;
        } else {
            diaDoMeio -= diasPorMes[i];
            mesCorrespondente++;
        }
    }

    return 0;
}
