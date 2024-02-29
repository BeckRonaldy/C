#include <stdio.h>
#include <string.h>

//definindo uma struct
struct st_contato{
    char nome[100];
    char telefone[20];
    char email[100];
}; 

//definindo uma struct dentro de uma struct
struct st_agenda{
    struct st_contato contatos[100];
};

int main(){
    struct st_agenda agenda;
    
    //input de dados de uma struct que está dentro de outra struct
    printf("===== Informe os dados do contato =====\n");
    printf("Nome:\n");
    fgets(agenda.contatos[0].nome, 100, stdin);
    printf("Telefone:\n");
    fgets(agenda.contatos[0].telefone, 100, stdin);
    printf("E-mail:\n");
    fgets(agenda.contatos[0].email, 100, stdin);

    printf("\n\n===== Dados do contato =====\n");
    printf("Nome: %s\n", agenda.contatos[0].nome);
    printf("Telefone: %s\n", agenda.contatos[0].telefone);
    printf("E-mail: %s\n", agenda.contatos[0].email);

    return 0;
}