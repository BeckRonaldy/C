#include<stdio.h>

int pot(int base, int expoente);
int qtde_digitos(int numero);
int inverte(int numero);

int main(){
    int numero=0;

    printf("Informe o numero: ");
    scanf("%d", &numero);

    printf("\nNumero invertido:\n> %d\n", inverte(numero));

    return 0;
}


int pot(int base, int expoente){
    int resultado = 1;

    while(expoente > 0){
        resultado = resultado * base;
        expoente--;
    }

    return resultado;
}

int qtde_digitos(int numero){
    int cont = 0;

    while (numero >= 1){
        numero = numero / 10;
        cont++;
    }

    return cont;
}

int inverte(int numero){
    int invertido = 0, contador = qtde_digitos(numero);

    while (numero >= 1){
        invertido = invertido + (numero % 10) * pot(10, contador - 1);
        numero = numero / 10;
        contador--;
    }

    return invertido;
}