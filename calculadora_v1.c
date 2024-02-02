#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    int opc = 0;
    float num1, num2;

    while (opc != 5) {
        printf("========== Calculadora 1.0 ==========\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\
            \n5 - Sair\n");
        scanf("%d", &opc);

        switch(opc) {
            case 1:
                printf("\n### SOMA ###\nInforme um numero: ");
                scanf("%f", &num1);
                printf("\nInforme outro numero: ");
                scanf("%f", &num2);
                printf("\nA soma de %.1f + %.1f = %.1f\n\n", num1, num2, num1 + num2);
                break;

            case 2:
                printf("\n### SUBTRAÇÃO ###\nInforme um numero: ");
                scanf("%f", &num1);
                printf("\nInforme outro numero: ");
                scanf("%f", &num2);
                printf("\nA subtração de %.1f - %.1f = %.1f\n\n", num1, num2, num1 - num2);
                break;

            case 3:
                printf("\n### MULTIPLICAÇÃO ###\nInforme um numero: ");
                scanf("%f", &num1);
                printf("\nInforme outro numero: ");
                scanf("%f", &num2);
                printf("\nA multiplicação de %.1f * %.1f = %.1f\n\n", num1, num2, num1 * num2);
                break;

            case 4:
                printf("\n### DIVISÃO ###\nInforme um numero: ");
                scanf("%f", &num1);
                printf("\nInforme outro numero: ");
                scanf("%f", &num2);
                printf("\nA divisão de %.1f / %.1f = %.1f\n\n", num1, num2, num1 / num2);
                break;

            case 5:
                printf("Voce escolheu sair.");
                break;

            default:
                printf("\nOpção informada inválida\n");
                break;
        }
    }
    return 0;
}