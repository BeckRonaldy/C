#include <stdio.h>
#include <stdlib.h>

/*
Calloc - quando aloca um espaço de memória esvazia os valores desse espaço
não mantendo o lixo na memória, substituindo por 0

Malloc - quando aloca um espaço pode ser que contenham lixo
os valores só são substituidos durante a execução do programa
*/

int main(){

    int qtd=3, *call, *mall;

    call = (int*)calloc(qtd, sizeof(int)); //alocando a memória
    mall = (int*)malloc(qtd * sizeof(int)); //alocando a memória

    if(call){
        printf("\nA variavel 'call' ocupa %d bytes em memoria.", qtd * sizeof(int));
        call[0] = 1;
        call[1] = 2;
        printf("\nO valor de call[0] = %d", call[0]);
        printf("\nO valor de call[1] = %d", call[1]);
        printf("\nO valor de call[2] = %d (valor nao definido)", call[2]);
    } else{
        printf("\nErro, memoria insuficiente!!");
    }

    if(mall){
        printf("\nA variavel 'mall' ocupa %d bytes em memoria.", qtd * sizeof(int));
        mall[0] = 1;
        mall[1] = 2;
        printf("\nO valor de mall[0] = %d", mall[0]);
        printf("\nO valor de mall[1] = %d", mall[1]);
        printf("\nO valor de mall[2] = %d (valor nao definido)", mall[2]);
    } else{
        printf("\nErro, memoria insuficiente!!");
    }

    free(call); //liberando a memória (desalocar)
    call = NULL; //medida de segurança

    free(mall); //liberando a memória (desalocar)
    mall = NULL; //medida de segurança

    return 0;
}