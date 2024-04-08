#include <stdio.h>

int busca_binaria(int vetor[], int chave, int tam){
    int inicio = 0;
    int fim = tam - 1;

    while(inicio <= fim){
        // Encontra o meio do vetor
        int meio = (inicio + fim) / 2;

        // Se a chave estiver no meio, retorna
        if(chave == vetor[meio]){
            return meio;
        }

        // Se a chave for menor que o valor do meio passa para o prox elemento
        if(chave < vetor[meio]){
            fim = meio - 1;

        } else{
            inicio = meio + 1;
        }
    }

    //Se não encontrar nada
    return -1;
}

int main(){
    // Vetor ordenado
    int vetor[6] = {1, 3, 5, 8, 12, 42};

    // Elemento que queremos encontrar
    int chave = 12;

    // Vetor, chave, tam
    int ret = busca_binaria(vetor, chave, 6);

    printf("O elemento %d, esta na posicao %d", chave, ret);

    return 0;
}