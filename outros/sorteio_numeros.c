#include <stdio.h>
#include <stdlib.h> //função rand e srand
#include <time.h> //função time
#include <windows.h>

void geraNumeros();

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    int i, jogos=0;
    printf("Informe quantos jogos de 6 números serão gerados:\n> ");
    scanf("%d", &jogos);

    printf("Números gerados:\n\n");
    for(i=0; i<jogos; i++){
        geraNumeros();
    }

    return 0;
}

void geraNumeros(){
    int numerosGerados[5], numerosSemente[100], i;
    
    //gera uma semente para a função rand() baseado em um horario:
    srand(time(NULL));
    for (i = 0; i <= 100; i++){
        numerosSemente[i] = rand() % 100; //arrumar para gerar um valor totalmente aleátório em C
    }
    
    
    //A função rand tem como semente o valor 1, fazendo com que em toda execução gere valores identicos
    for (i = 0; i <= 5; i++){
        numerosGerados[i] = rand() % 60;
    }

    //impressão dos numeros gerados: 
    printf("\n\n");
    for (i = 0; i <= 5; i++){
        printf("%d\t", numerosGerados[i]);
    }
}