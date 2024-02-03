#include <stdio.h>
#include <locale.h>
#include <windows.h>

void incrementar(int cont);
void incrementarPorEndereco(int* cont);

int main(){
    //impressão com acentos
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    int cont=1;

    printf("\n\nAntes de incrementar(função main):\n> %d", cont);
    incrementar(cont);
    printf("\n\nDepois de incrementar(função main):\n> %d", cont);
    printf("\n\nEndereço de memória(main):\n> %d", &cont); //mostra o endereço de memória da variável

    printf("\n\nAntes de incrementar passando por endereço de memória(função main):\n> %d", cont);
    incrementarPorEndereco(&cont);
    printf("\n\nDepois de incrementar passando por endereço de memória(função main):\n> %d", cont);
    printf("\n\nEndereço de memória(main):\n> %d", &cont); //mostra o endereço de memória da variável

    return 0;
}

void incrementar(int cont){
    printf("\n\nAntes de incrementar(função incrementar):\n> %d", cont);
    printf("\n\nDepois de incrementar(função incrementar):\n> %d", ++cont);
    printf("\n\nEndereço de memória(função incrementar):\n> %d", &cont); //mostra o endereço de memória da variável
    /*
    opera após impressão/utilização da variável
    x++;
    x--;

    opera antes da impressão/utilização da variável
    ++x;
    --x;
    */
}

void incrementarPorEndereco(int* cont){
    printf("\n\nAntes de incrementar(função incrementar por endereço):\n> %d", (*cont));
    printf("\n\nDepois de incrementar(função incrementar por endereço):\n> %d", ++(*cont));
    printf("\n\nEndereço de memória(função incrementar por endereço):\n> %d", cont); //mostra o endereço de memória da variável
}

