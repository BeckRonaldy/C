/*
    #define PI 3.41567 -> Constante
    ifndef -> Diretiva de compilação
    caso não seja definida uma constante o ifndef criará ela
    caso a constante já esteja definida ele à ignorará
*/

#include <stdio.h>

#ifndef PI
    #define PI 3.41567
#endif

int main(){
    printf("PI = %f\n", PI);
    return 0;
}