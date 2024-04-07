/*
    Pilha / Stack

    FILO - First In / Last Out
    LIFO - Last In / First out

    ---
    |4| -> Topo
    ---
    |3|
    ---
    |2|
    ---
    |1| -> Fundo
    ---

    Os dados são sempre inseridos no topo
    Temos acesso ao elemento do topo apenas
    Push - Processo de inserir elemento
    Pop - Processo de remover elemento

*/

#include <stdio.h>

#define TAMPILHA 10

int pilha[TAMPILHA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int topo = 0;

void lista_elementos(){
    printf("\n============= PILHA ATUAL =============\n");
    for(int i=0; i < TAMPILHA; i++){
        printf("|%d|", pilha[i]);
        if(i < (TAMPILHA - 1)){
            printf(" - ");
        }
    }
    printf("\n\nTopo = %d\n", topo);
}

void push(){
    int val;
    printf("\nInforme o valor: ");
    scanf("%d", &val);
    if(topo < TAMPILHA){
        pilha[topo] = val;
        topo = topo + 1;
        lista_elementos();
    } else{
        printf("\nErro, a pilha esta cheia!\n");
    } 
}

void pop(){
    if(topo > 0){
        pilha[topo-1] = 0;
        topo = topo - 1;
        lista_elementos();
    } else{
        printf("\nPilha vazia!\n");
    }
}

void clear(){
    for(int i = 0; i < TAMPILHA; i++){
        pilha[i] = 0;
    }
    topo = 0;
    lista_elementos();
}

int main(){
    int opcao = 0;
    do{
        printf("\n========= Selecione a opcao =========\n");
        printf("[1]  - Inserir(push)\n");
        printf("[2]  - Remover(pop)\n");
        printf("[3]  - Listar\n");
        printf("[4]  - Limpar a pilha\n");
        printf("[-1] - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            lista_elementos();
            break;
        case 4:
            clear();
            break;
        case -1:
            break;
        default:
            printf("\nOpcao invalida!\n");
            break;
        }
    } while(opcao != -1);

    return 0;
}