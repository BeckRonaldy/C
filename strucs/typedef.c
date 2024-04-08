#include <stdio.h>
#include <string.h>

//typedef -> redefinir tipos

int main(){
    typedef float nota; //definimos que "nota" agora seria equivalente ao tipo "float"

    //declarando variaveis
    nota prova1 = 7.0; //declaramos uma variável do tipo "nota" com os atributos de "float"
    nota prova2 = 8.0;
    float prova3 = 9.0; //declarando uma variavel "float"

    nota soma = prova1 + prova2 + prova3; //as operações entre tipos iguais mesmo renomeados 

    printf("A soma das notas e %.1f", soma);
    
    return 0;
}