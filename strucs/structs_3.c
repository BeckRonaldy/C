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
}; 

int main(){
    struct st_aluno alunos[5]; //declarando array de structs
    
    //obtendo valores e tranferindo para a struct
    for(int i=0; i<5; i++){
        printf("\n\n=== Aluno %d ===", i+1);
        printf("\nInforme a matricula do aluno: \n");
        fgets(alunos[i].matricula, 10, stdin); 

        printf("\nInforme a nome do aluno: \n");
        fgets(alunos[i].nome, 50, stdin);

        printf("\nInforme a curso do aluno: \n");
        fgets(alunos[i].curso, 50, stdin);

        printf("\nInforme o ano de nascimento do aluno: \n");
        scanf("%d", &alunos[i].ano_nascimento);

        fflush(stdin); //limpar buffer de memória
    }
    
    //imprimindo dados informados
    for(int i=0; i<5; i++){
        printf("\n\nDados do aluno %d:\n", i+1);
        printf("\nMatricula: %s", alunos[i].matricula);
        printf("\nNome: %s", alunos[i].nome);
        printf("\nCurso: %s", alunos[i].curso);
        printf("\nAno de nascimento: %d", alunos[i].ano_nascimento);
    }
   
    return 0;
}