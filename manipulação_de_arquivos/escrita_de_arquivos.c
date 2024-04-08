#include <stdio.h>
#include <locale.h>
#include <windows.h>
//FILE = tipo arquivo

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    FILE *arq;
    char fruta[10];

    arq = fopen("frutas.txt", "a");
    //fopen("nome-do-arquivo", "tipo-do-arquivo")
    //w - abrir o arquivo para escrita
    //r - abrir para leitura
    //a - abrir para adição de conteúdo e cria se não existe

    if(arq){
        printf("\nInforme uma fruta ou 0 para sair:\n");
        fgets(fruta, 10, stdin); //stdin = standard input --> entrada padrão 
        while(fruta[0] != '0'){
            fputs(fruta, arq);
            printf("\nInforme uma fruta ou 0 para sair:\n");
            fgets(fruta, 10, stdin);
        }
    }else{
        printf("\nNão foi possivel criar o arquivo!");
    }

    //sempre fechar arquivos
    fclose(arq);

    return 0;
}