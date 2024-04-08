#include <stdio.h>

int main(){
    int i, j, vetor[10], matriz[10][10];

    //preenchendo vetor
    for(i=0; i<10; i++){
        vetor[i] = i;
    }

    //preenchendo matriz
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            matriz[i][j] = j;
        }
    }

    //imprimindo vetor
    printf("\n\nVetor:\n\n");
    for(i=0; i<10; i++){
        printf("%d\t", vetor[i]);
    }

    //imprimindo matriz
    printf("\n\nMatriz:\n\n");
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}