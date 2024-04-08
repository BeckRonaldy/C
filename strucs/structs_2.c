#include <stdio.h>
#include <string.h>

/*
* POO em C aula 1
* Struct -> estrutura
* Podemos criar objetos utilizando as Strucs
*/

//definindo uma struct
struct st_aluno{
    char matricula[10];
    char nome[50];
    char curso[50];
    int ano_nascimento;
}aluno1; //outra maneira de declarar structs

int main(){
    
    //obtendo valores e tranferindo para a struct
    printf("\nInforme a matricula do aluno: \n");
    fgets(aluno1.matricula, 10, stdin); 

    printf("\nInforme a nome do aluno: \n");
    fgets(aluno1.nome, 50, stdin);

    printf("\nInforme a curso do aluno: \n");
    fgets(aluno1.curso, 50, stdin);

    printf("\nInforme o ano de nascimento do aluno: \n");
    scanf("%d", &aluno1.ano_nascimento);

    printf("\n\n=================== Dados do aluno ===================\n");
    printf("Matricula: %s\n", aluno1.matricula);
    printf("Nome: %s\n", aluno1.nome);
    printf("Curso: %s\n", aluno1.curso);
    printf("Ano de nascimento: %d\n", aluno1.ano_nascimento);

    return 0;
}