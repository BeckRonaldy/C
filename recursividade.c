#include <stdio.h>

/*
* Recursividade
* Capacidade da função chamar a si mesma
*
* Fibonacci -> 1 1 2 3 5 8 13 21 34 55 ...
* Soma do numero dos dois numeros anteriores
*/

int fib(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main(){
    int qtd;

    printf("Informe o tamanho da sequencia fibonacci: \n");
    scanf("%d", &qtd);

    for(int i=0; i<qtd; i++){
        printf("%d ", fib(i + 1));
    }

    return 0;
}