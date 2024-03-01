#include <stdio.h>
/*
* #define PI 3.41567 -> Constante
* ifdef
* caso a constante exista ele irá executar uma ação
*/

#ifndef PI
    #define PI 3.41567
#endif

int main(){
    printf("PI = %f\n", PI);

    //verifica se a constante PI existe
    #ifdef PI
        printf("O valor de PI = %f\n", PI);
    #endif

    return 0;
}