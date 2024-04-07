/*
    Matriz bi-dimenssional
    [00][01][02]
    [10][11][12]
    [20][21][22]

    int -> 4 bytes
    linha-3 x coluna-3 x int-4 = 36 bytes
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p, linhas=3, colunas=3;

    p = (int*)malloc(linhas * colunas * sizeof(int));

    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            p[i * colunas + j] = 3 * i + j;
        }
    }

    for(int i=0; i<linhas; i++){
        printf("\n");
        for(int j=0; j<colunas; j++){
            printf("[%d] ", p[i * colunas + j]);
        }
    }

    free(p);
    p = NULL;

    return 0;
}