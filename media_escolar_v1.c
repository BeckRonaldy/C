#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota=0, soma=0, media=0;
    int aux=0, quantNotas=0;

    printf("========== Media Escolar 1.0 ==========\n\n");
    
    printf("Quantas notas serao informadas?\n> ");
    scanf("%d", &quantNotas);

    do{
        printf("\nInforme a sua nota %d:\n> ", aux+1);
        scanf("%f", &nota);
        soma = soma + nota;
        aux++;
    } while(aux < quantNotas);

    media = soma / quantNotas;

    printf("\nA media das suas notas foi de:\n> %0.1f pontos\n", media);

    printf("\nCondicao para aprovacao: \nNota igual ou superior a 6.0\n");

    if(media >= 6.0){printf("\nSituacao: \n> Aprovado!\n");}
    else{printf("\nSituacao: \n> Reprovado!\n");}

    system("pause");
    return 0;
}