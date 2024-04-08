#include <stdio.h>
#include <string.h>

//A Union aloca e utiliza apenas o espaço da maior variavel.
union pessoa{
    char nome[100]; //1 char = byte -> 100 char = 100 bytes
    int idade; //4 bytes
    //total de 104 bytes 
};

union numeros{
    int num1, num2, num3;
}n;

/* 
*  Ao utilizar a Union, sempre sera reservado o espaço do tamanho da maior variavel na memoria, porem ao 
*  inserir dados em demais variaveis, a union sobreescrevera na memoria colocando o novo valor no mesmo espaço
*  é uma boa forma de gerenciar memoria em programas que precisam lidar com pouco espaço de memoria
*/ 

int main(){
    union pessoa pes;

    strcpy(pes.nome, "Angelina Jolie");
    printf("\nDados de %s:\n", pes.nome);

    pes.idade = 39;
    printf("Ela tem %d anos\n", pes.idade); //a idade está substituindo o valor alocado para o nome(maior tamanho alocado)

    printf("\nDados de %s:\n", pes.nome); //aparece como ' ' pois o ultimo dado sempre sobreescreve o endereço de memoria reservado

    printf("\nA variavel 'pes' esta ocupando %ld bytes em memoria\n\n", sizeof(pes));

    n.num1 = 1;
    n.num2 = 3;
    n.num3 = 5;

    //sempre imprimira o valor 5 pois foi o ultimo valor transferido para a memoria atraves do num3
    printf("O valor de num1 -> %d\n", n.num1);
    printf("O valor de num2 -> %d\n", n.num2);
    printf("O valor de num3 -> %d\n\n", n.num3); 

    //tamanhos de variaveis
    int numero = 42;
    float nota = 7.9;
    double temperatura = 10.4;
    char letra = 'd';

    printf("A variavel numero tem valor: %d e ocupa %ld bytes em memoria\n", numero, sizeof(numero));
    printf("A variavel nota tem valor: %.2f e ocupa %ld bytes em memoria\n", nota, sizeof(nota));
    printf("A variavel temperatura tem valor: %.1f e ocupa %ld bytes em memoria\n", temperatura, sizeof(temperatura));
    printf("A variavel letra tem valor: %c e ocupa %ld bytes em memoria\n", letra, sizeof(letra));
    
    return 0;
}