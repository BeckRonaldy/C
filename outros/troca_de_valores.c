#include <stdio.h>

int A, B; //declaração de váriaveis globais

void troca_vars(void); //declaração de função

int main(){
    printf("Informe dois valores para a troca: \nValor A:\n> ");
    scanf("%d", &A);

    printf("\nValor B:\n> ");
    scanf("%d", &B);

    troca_vars(); //chama função declarada

    printf("\nValores trocados! \nValor A: %d \nValor B: %d\n", A, B);

    system("PAUSE");
    return 0;
}

//declaração de função
void troca_vars(void){
    int X;
    X = A;
    A = B;
    B = X;
}