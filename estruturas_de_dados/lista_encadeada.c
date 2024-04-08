/*
    Lista Encadeada / Lista Ligada / Linked List

    A lista encadeada possui além do seu valor, um ponteiro apontando para o
    próximo elemento.

    ---      ---      ---
    |1| | -> |2| | -> |3| | -> NULL
    ---      ---      ---

    Caso esse elemento seja único ou o último elemento ele apontará para NULL

    https://www.embarcados.com.br/ponteiro-em-c-estruturas/    
*/

#include <stdio.h>
#include <stdlib.h>

struct st_no{
    int valor;
    struct st_no *prox;
};

typedef struct st_no no;

int vazia(no *le){
    if(le->prox == NULL){
        return 1;
    } else{
        return 0;
    }
}

void inicia(no *le){
    le->prox = NULL;
}

void exibe(no *le){
    if(vazia(le)){
        printf("\nLista esta vazia!\n");
        return;
    }
    no *temp;
    temp = le->prox;
    printf("\nLista:\n");
    while(temp != NULL){
        printf("|%d| - ", temp->valor);
        temp = temp->prox;
    }
    printf("\n");
}

void libera(no *le){
    if(!vazia(le)){
        no *proxNo, *atual;
        atual = le->prox;
        while(atual != NULL){
            proxNo = atual->prox;
            free(atual);
            atual = proxNo;
        }
    }
}

void insere_inicio(no *le){
    no *novo = (no*)malloc(sizeof(no));
    if(!novo){
        printf("\nSem memoria disponivel!\n");
        exit(1);
    }
    printf("\nInforme o valor: ");
    scanf("%d", &novo->valor);

    no *oldHead = le->prox;

    le->prox = novo;
    novo->prox = oldHead;
    exibe(le);
}

void insere_fim(no *le){
    no *novo = (no*)malloc(sizeof(no));
    if(!novo){
        printf("\nSem memoria disponivel!\n");
        exit(1);
    }
    printf("\nInforme o valor: ");
    scanf("%d", &novo->valor);

    novo->prox = NULL;

    if(vazia(le)){
        le->prox = novo;
    } else{
        no *temp = le->prox;

        while(temp -> prox !=NULL){
            temp = temp->prox;
        }
        temp->prox = novo;
    }
    exibe(le);
}

void opcao(no *le, int op){
    switch(op){
    case 0:
        libera(le);
        break;
    case 1:
        exibe(le);
        break;
    case 2:
        insere_inicio(le);
        break;
    case 3:
        insere_fim(le);
        break;
    case 4:
        inicia(le);
        break;
    default:
        printf("\nComando invalido!\n");
        break;
    }
}

int menu(){
    int opt;
    printf("\n============== Escolha a opcao ==============\n");
    printf("[0] - Sair;\n");
    printf("[1] - Exibir:\n");
    printf("[2] - Adicionar no inicio;\n");
    printf("[3] - Adicionar no fim;\n");
    printf("[4] - Zerar lista;\n");
    printf("Opcao: ");
    scanf("%d", &opt);

    return opt;
}

int main(){
    no *le = (no*)malloc(sizeof(no));
    int opt;

    if(!le){
        printf("Sem memoria disponivel!");
        exit(1);
    }
    inicia(le);

    do{
        opt = menu();
        opcao(le, opt);
    } while (opt);

    free(le);
    return 0;
}