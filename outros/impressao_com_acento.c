#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    printf("Texto com acento ãõíáú");
    return 0;
}