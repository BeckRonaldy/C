#include <stdio.h>
#include <stdlib.h>

//Malloc - alocação de memória

int main(){

    int qtd, tam, *p;

    printf("Informe a quantidade de elementos do vetor: ");
    scanf("%d", &qtd);

    tam = (qtd * sizeof(int)); // 3x4 == 12 bytes
    p = (int*)malloc(tam); //alocando a memória

    if(p){
        for(int i=0; i<qtd; i++){
            printf("Informe o valor para a posicao %d do vetor: ", i);
            scanf("%d", &p[i]);
        }

        for(int i=0; i<qtd; i++){
            printf("No vetor 'p[%d]' esta o valor: %d\n", i, p[i]);
        }

        printf("A variavel 'p' ocupa %d bytes em memoria.\n\n", tam);
    } else{
        printf("Erro, memoria insuficiente!!");
    }
    
    free(p); //liberando a memória (desalocar)
    p = NULL; //medida de segurança

    return 0;
}