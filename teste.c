#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "");
    printf("Olá mundo!\n");
    
    system("Pause > Nul");
    return 0;
}