#include <stdio.h>

//Enum -> Enumeração

enum dias_da_semana{
    domigo,
    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado
};

int main(){
    enum dias_da_semana d1, d2;

    d1 = quinta;
    d2 = 4;

    if(d1 == d2){
        printf("Os dias sao iguais!");
    } else{
        printf("Os dias sao diferentes!");
    }

    return 0;
}