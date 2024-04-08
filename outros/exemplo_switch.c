#include<stdio.h>

int main() {
    int num;
    printf("Informe um numero de 1 a 12 para obter o mes correspondente: ");
    scanf("%d", &num);

    switch (num){
        case 1:
            printf("\nO mes %d e janeiro.\n", num);
            break;
        case 2:
            printf("\nO mes %d e fevereiro.\n", num);
            break;
        case 3:
            printf("\nO mes %d e março.\n", num);
            break;
        case 4:
            printf("\nO mes %d e abril.\n", num);
            break;
        case 5:
            printf("\nO mes %d e maio.\n", num);
            break;
        case 6:
            printf("\nO mes %d e junho.\n", num);
            break;
        case 7:
            printf("\nO mes %d e julho.\n", num);
            break;
        case 8:
            printf("\nO mes %d e agosto.\n", num);
            break;
        case 9:
            printf("\nO mes %d e setembro.\n", num);
            break;
        case 10:
            printf("\nO mes %d e outubro.\n", num);
            break;
        case 11:
            printf("\nO mes %d e novembro.\n", num);
            break;
        case 12:
            printf("\nO mes %d e dezembro.\n", num);
            break;
        default:
        printf("Nao existe mes correspondente ao numero informado!");
            break;
        }

    return 0;
}