#include <stdio.h>

void merge(int vetor[], int inicio1, int fim1, int inicio2, int fim2){
    // Vetor temporário para o merge
    int temp[50];
    // Váriaveis auxiliares
    int i, j, k;
    // Inicio do primeiro grupo
    i = inicio1;
    // Inicio do segundo grupo
    j = inicio2;
    k = 0;

    //Enquanto tiver elementos em ambos grupos
    while(i <= fim1 && j <= fim2){
        // Faz a ordenação de acordo com cada grupo
        if(vetor[i] < vetor[j]){
            temp[k++] = vetor[i++];
        } else{
            temp[k++] = vetor[j++];
        }
    }

    // Copiar os elementos restantes do primeiro grupo
    while(i <= fim1){
        temp[k++] = vetor[i++];
    }

    // Copiar os elementos restantes do segundo grupo
    while(j <= fim2){
        temp[k++] = vetor[j++];
    }

    //Transfere os elementos do vetor temporário para o original
    for(i = inicio1, j = 0; i <= fim2; i++, j++){
        vetor[i] = temp[j];
    }
}

void merge_sort(int vetor[], int inicio, int fim){
    if(inicio < fim){
        // Calcular o meio do vetor
        int meio = (inicio + fim) / 2;

        // Recursão esquerda
        merge_sort(vetor, inicio, meio);

        // Recursão direita
        merge_sort(vetor, meio + 1, fim);

        // Faz o merge(junta) os dois grupos de vetores ordenados
        merge(vetor, inicio, meio, meio + 1, fim);
    }
}

int main(){
    int vetor[6] = {8, 3, 1, 42, 12, 5};
    
    // vetor, inicio, fim
    merge_sort(vetor, 0, 6 - 1);

    for(int i=0; i < 6; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}
