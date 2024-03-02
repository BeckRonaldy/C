#include <stdio.h>

int main(){
    int num[3];
    num[0] = 55;
    num[1] = 33;
    num[2] = 44;

    printf("A variavel 'num[0]' vale %d e ocupa %ld bytes em memoria\n", num[0], sizeof(num[0]));
    printf("A variavel 'num[1]' vale %d e ocupa %ld bytes em memoria\n", num[1], sizeof(num[1]));
    printf("A variavel 'num[2]' vale %d e ocupa %ld bytes em memoria\n", num[2], sizeof(num[2]));
    printf("A variavel 'num' ocupa %ld bytes em memoria\n", sizeof(num));

    return 0;
}