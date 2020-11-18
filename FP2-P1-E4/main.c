//Ficha Prática - Parte 1 - Exercicio 4

#include <stdio.h>

int main() {
    int numero;
    printf("Introduza um número: ");
    scanf("%d", &numero);
    if (numero%2==0){
        printf("O número é par!");
    }else{
        printf("O número é impar!");
    }
    return 0;
}

