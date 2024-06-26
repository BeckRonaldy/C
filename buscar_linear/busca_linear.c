#include <stdio.h>

int busca_linear(int vetor[], int chave, int tam){
    for(int i = 0; i < tam; i++){
        if(vetor[i] == chave){
            return i;
        }
    }
    return -1;
}

int main(){
    // Vetor ordenado
    int vetor[6] = {1, 3, 5, 8, 12, 42};

    // Elemento que queremos encontrar
    int chave = 12;

    // Vetor, chave, tam
    int ret = busca_linear(vetor, chave, 6);

    printf("O elemento %d, esta na posicao %d", chave, ret);

    return 0;
}