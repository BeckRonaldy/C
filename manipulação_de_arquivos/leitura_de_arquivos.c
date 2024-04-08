//FILE = tipo arquivo

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    FILE *nomes, *textos, *numeros;
    char caracter, textosLinha[50], *resultado;
    int num, resNum, soma=0;

    //fopen("nome-do-arquivo", "tipo-do-arquivo")
    //w - abrir o arquivo para escrita
    //r - abrir para leitura
    //a - abrir para adição de conteúdo

    nomes = fopen("nomes.txt", "r");
    textos = fopen("textos.txt", "r");
    numeros = fopen("numeros.txt", "r");

    printf("\nNomes:\n\n");
    if(nomes){ 
        //EOF = End of File
        while((caracter = getc(nomes)) != EOF){
            printf("%c", caracter);
        }
    } 
    else{ 
        printf("Arquivo 'nomes.txt' não existe"); 
    }

    printf("\n\nTextos por linha:\n\n");
    if(textos){
        //feof = file end of file
        while(!feof(textos)){
            //fgets(variavel, quantidade-de-caracteres, arquivo)
            resultado = fgets(textosLinha, 50, textos);
            if(resultado){
                printf("%s", textosLinha);
            }
        }
    } 
    else{ 
        printf("Arquivo 'textos.txt' não existe"); 
    }

    printf("\n\nNumeros:\n");
    if(numeros){
        while(!feof(numeros)){
            /*
            * Caso haja uma linha em branco no final a soma retornaria o ultimo numero encontrado
            * então verificamos se a função retornou um numero ou uma linha em branco
            */
            resNum = fscanf(numeros, "%d", &num);
            if(resNum == 1){
                soma = soma + num;
                printf("\nNumero encontrado: %d", num);
            }
        }
        printf("\n\nA soma dos numeros encontrados no arquivo é: %d\n", soma);
    } 
    else{ 
        printf("Arquivo 'numeros.txt' não existe"); 
    }

    //sempre fechar arquivo
    fclose(nomes);
    fclose(textos);
    fclose(numeros);

    return 0;
}