//Ficha Prática 2 - Parte 1 - Exercicio 5

#include <stdio.h>

int main() {
    int a;
    printf("Introduza um número: ");
    scanf("%d", &a);
    switch(a){
        case 1:
            printf("O valor é um");
            break;
        case 2:
            printf("O valor é dois");
            break;
        case 3:
            printf("O valor é três");
            break;
    }
    return 0;
}

