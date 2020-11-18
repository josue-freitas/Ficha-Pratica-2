//Ficha Prática 2 - Parte 2 - Exercicio 1

#include <stdio.h>

int main() {
    float valor1,valor2;
    char caracter;
    printf ("Introduza o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Introduza o segundo valor: ");
    scanf("%f", &valor2);
    printf("Caracter aritmético: ");
    scanf(" %c", &caracter);
    switch(caracter){
        case '+':
            printf("Resultado: %4.2f", valor1+valor2);
            break;
        case '-':
            printf("Resultado: %4.2f", valor1-valor2);
            break;
        case '*':
            printf("Resultado: %4.2f", valor1*valor2);
            break;
        case '/':
            printf("Resultado: %4.2f", valor1/valor2);
            break;
        default:
            printf("Resultado: %4.2f", valor1+valor2);
            break;
    }
    return 0;
}

