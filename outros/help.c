
/*
    operações e definições básicas para escrever código em C
    
    impressão simples:
    printf("Palavra");

    impressão de váriável:
    int variavel = 0;
    printf("\n%i\n", variavel);

    declaração:
    int num;
    float numfloat;
    char caracter;
    double numdouble;

    tipos de variaveis:
    1 - char  (armazena caracteres)
    2 - int (armazena numeros positivos e negativos)
    3 - float (numeros flutuantes ex: 10,50)
    4 - void (vazio, sem tipo)
    5 - double (ponto flutuante duplo, armazen muitas casas decimais)

    1 - para imprimir numeros int : %i ou %d
    2 - para float ou double : %f
    3 - para char: %c
    4 - para str: %s
    5 - para modulo de um numero: %u
    6 - para endereço de memória: %p
    7 - para para imprimir número com notação cientifica %e ou %E
    8 - para imprimir somente uma %: %%

    1 - \n -> quebra linha
    2 - \t -> dar um tab na impressao
    3 - \\ -> para imprimir um barra invertida
    4 - \" -> para imprimir aspas duplas
    5 - \' -> para imprimir aspas simples
    6 - \0 -> finaliza o texto

    % - para obter resto da divisao
    printf("%i\n", 19 % 7 );
    printf("%i\n", 9 % 4 );
    printf("%i\n", 99 % 5 );
    printf("%i\n", 11 % 3 );

    char caractere;
    printf("Digite um caracter em letra minuscula: ");
    scanf( "%c", &caractere );
    if( caractere >= 'a' ){
        printf("Segue a letra digitada em maiuscula: > %c <", toupper(caractere));
    }  

    int i = 1;
    printf("Digite um numero diferente de 9: \n");
    scanf("%i", &i );
    if( i != 9 ){
        printf("A expressao e: \n");
        printf("TRUE");
    }
    else{
        printf("A expressao e: \n");
        printf("FALSE");
    }


*/

#include <stdio.h>

int main(){

    return 0;
}

