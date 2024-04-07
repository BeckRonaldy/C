/*
    Fila / Queue

    - Fila de banco
    - O elemento que entra primeiro sai primeiro
    - Sempre que um elemento é adicionado à fila, vai para o final dela
    - Sempre que removemos um elementos o primeior é removido

    FIFO - First In / First Out

    enqueue() // adiciona elemento
    dequeue() // remove elemento
    clear() // limpa a fila

    fila[10] - [0][1][2][3][4][5][6][7][8][9]

    head // cabeça da fila, indica o primeiro elemento da fila.
    tail // calda da fila, indica quantos elementos tem na fila.

    Aplicação: Em qualquer situação onde tenha que se organizar elementos.

*/

#include <stdio.h>

#define TAMFILA 10
int fila[TAMFILA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int head = 0; // proximo da fila
int tail = 0; // ultimo da fila

void lista_elementos(){
    printf("\n========= FILA ATUAL =========\n");
    for(int i=0; i < TAMFILA; i++){
        printf("|%d|", fila[i]);
        if(i < (TAMFILA - 1)){
            printf(" - ");
        }
    }
    printf("\nHead: %d", head);
    printf("\nTail: %d\n", tail);
}

void enqueue(){
    int val;
    if(tail < TAMFILA){
        printf("\nInforme o elemento para adicionar a fila: ");
        scanf("%d", &val);
        fila[tail] = val;
        tail = tail + 1;
        lista_elementos();
    } else{
        printf("\nA fila está cheia!\n");
    }
}

void dequeue(){
    if(head < tail){
        fila[head] = 0;
        head = head + 1;
        reorganizar();
        lista_elementos();
    } else{
        printf("\nA fila está vazia!\n");
    }
}

void clear(){
    head = 0;
    tail = 0;
    for(int i=0; i < TAMFILA; i++){
        fila[i] = 0;
    }
    lista_elementos();
}

void reorganizar(){
    int fila_aux[TAMFILA];
    
    for (int i=0; i < TAMFILA; i++){
        fila_aux[i] = fila[i];
    }

    for(int i=0; i < tail; i++){
        fila[i] = fila_aux[head + i];
    }

    tail = tail - head;
    head = 0;
}

int main(){
    int opcao = 0;
    do{
        printf("\n========= Selecione a opcao =========\n");
        printf("[1]  - Inserir(enqueue)\n");
        printf("[2]  - Remover(dequeue)\n");
        printf("[3]  - Listar\n");
        printf("[4]  - Limpar a fila\n");
        printf("[-1] - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao){
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
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
