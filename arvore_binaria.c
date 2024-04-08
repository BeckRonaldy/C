/*
    Árvore Binária / Binary Tree

    São estruturas de dados caracterizadas por:
    - Ou não tem elemento algum (árvore vazia);
    - Ou tem um elemento distinto, denominado raiz, com dois apontamentos
      para duas estruturas diferentes, denominadas sub-árvore esquerda e
      sub-árvore direita.
*/

#include <stdio.h>
#include <stdlib.h>

struct st_arvore{
    int valor;
    struct st_arvore *sad; //sub-árvore direita
    struct st_arvore *sae; //sub-árvore esquerda 
};

typedef struct st_arvore arvore;

arvore* criaArvore(){
    return NULL;
}

int arvoreVazia(arvore* t){
    return t == NULL;
}

void mostraArvore(arvore* t){
    printf(" < ");
    if(!arvoreVazia(t)){
        printf("%d", t->valor);
        mostraArvore(t->sae);
        mostraArvore(t->sad);
    }
    printf(" > ");
}

void insereDadoArvore(arvore** t, int num){
    if(*t == NULL){
        *t = (arvore*)malloc(sizeof(arvore));
        (*t)->sae = NULL;
        (*t)->sad = NULL;
        (*t)->valor = num;
    } else{
        if(num < (*t)->valor){
            insereDadoArvore(&(*t)->sae, num);
        }
        if(num > (*t)->valor){
            insereDadoArvore(&(*t)->sad, num);
        }
    }
}

int estaNaArvore(arvore* t, int num){
    if(arvoreVazia(t)){
        return 0;
    }

    return t->valor==num || estaNaArvore(t->sae, num) || estaNaArvore(t->sad, num);
}

int main(){

    arvore* t = criaArvore();

    insereDadoArvore(&t, 12);
    insereDadoArvore(&t, 15);
    insereDadoArvore(&t, 10);
    insereDadoArvore(&t, 13);
    insereDadoArvore(&t, 14);

    mostraArvore(t);

    if(arvoreVazia(t)){
        printf("\nArvore vazia!\n\n");
    } else{
        printf("\nArvore nao vazia!\n\n");
    }

    if(estaNaArvore(t, 15)){
        printf("\nO elemento 15 pertence a arvore!\n");
    } else{
        printf("\nO elemento 15 nao pertence a arvore!\n");
    }

    if(estaNaArvore(t, 5)){
        printf("\nO elemento 5 pertence a arvore!\n");
    } else{
        printf("\nO elemento 5 nao pertence a arvore!\n");
    }

    return 0;
}