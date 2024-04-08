#include <stdio.h>

int main(){
    int numero, vetor[5];
    int* ponteiro; //declarando o ponteiro

    printf("Informe um numero:\n> ");
    scanf("%d", &numero);

    //inicializando o ponteiro
    ponteiro = &numero;

    printf("\nO numero informado foi: %d", numero);
    printf("\nO endereco de memoria do numero informado foi: %p", &numero);

    printf("\nO valor do ponteiro: %d", *ponteiro);
    printf("\nO endereco do ponteiro: %p", ponteiro);

    for(int i=0; i<5; i++){
        vetor[i] = i+5;
    }

    printf("\n\nOs valores do vetor gerado sao:\n");
    for(int i=0; i<5; i++){
        printf("%d\t", vetor[i]);
    }

    printf("\nO endereco de memoria do vetor e: %p", &vetor);
    printf("\nO endereco de memoria do 1 elemento vetor e: %p", &vetor[0]);
    printf("\nO endereco de memoria do 3 elemento do vetor e: %p", &vetor[2]);
    printf("\nO endereco de memoria do 5 elemento do vetor e: %p", &vetor[4]);

    return 0;
}