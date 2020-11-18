//Ficha Prática 2 - Parte 1 - Exercicio 1

#include <stdio.h>

int main() {
    int valor1,valor2;
    printf("Introduza o primeiro número: ");
    scanf("%d", &valor1);
    printf("Introduza o segundo número: ");
    scanf("%d", &valor2);
    if (valor1>valor2){
        printf("O maior número é o: %d\n", valor1);
        printf("O menor número é o: %d", valor2);
    } else {
        printf("O maior número é o: %d\n", valor2);
        printf("O menor número é o: %d", valor1);
    }
    return 0;
}

