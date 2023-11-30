#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    int array[6];
    char start,finish, aux;
    char letras[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    bool bigger;

    array[0] = 3;
    array[1] = 1;
    array[2] = 4;
    array[3] = 1;
    array[4] = 5;
    array[5] = 9;

    scanf("%c %c", &start, &finish);
    bigger = start > finish ? true : false;

    if(bigger){
        aux = start;
        start = finish;
        finish = aux;
    }
    
    int indexF, indexS;
    int sum = 0;

    for(int i = 0; i <= 6; i++){
        if(start == letras[i]){
            indexS = i;
        }
        if(finish == letras[i]){
            indexF = i;
        }
    }

    for(int i = indexS; i < indexF; i++){
        sum += array[i];
    }

    printf("%d", sum);
    return 0;
}