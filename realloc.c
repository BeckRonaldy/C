/*
    Calloc - quando aloca um espaço de memória esvazia os valores desse espaço
    não mantendo o lixo na memória, substituindo por 0

    Malloc - quando aloca um espaço pode ser que contenham lixo
    os valores só são substituidos durante a execução do programa

    Realloc - realocação de memória
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int qtd, *mall;
    
    printf("Informe a quantidade de elementos para a alocacao: ");
    scanf("%d", &qtd);

    mall = (int*)malloc(qtd * sizeof(int)); //alocando a memória

    if(mall){
        printf("A variavel 'mall' ocupa %d bytes em memoria.\n", qtd * sizeof(int));
       
        printf("\nInforme a quantidade de elementos para a realocacao: ");
        scanf("%d", &qtd);

        mall = (int*)realloc(mall, qtd * sizeof(int)); //realocando a memoria
    
        printf("A variavel realocada 'mall' ocupa %d bytes em memoria.\n", qtd * sizeof(int));
    } else{
        printf("\nErro, memoria insuficiente!!");
    }

    free(mall); //liberando a memória (desalocar)
    mall = NULL; //medida de segurança

    return 0;
}