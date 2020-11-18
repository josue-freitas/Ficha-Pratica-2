//Ficha Prática 2 - Parte 1 - Exercicio 2

#include <stdio.h>

int main() {
    int valor1,valor2,valor3;
    printf("Introduza o primeiro número: ");
    scanf("%d", &valor1);
    printf("Introduza o segundo número: ");
    scanf("%d", &valor2);
    printf("Introduza o terceiro número: ");
    scanf("%d", &valor3);
    
    if (valor1<valor2 && valor1<valor3){
        printf("O menor número é o: %d", valor1);
    }else if (valor2<valor1 && valor2<valor3){
        printf("O menor número é o: %d", valor2);
    }else{
        printf("O menor número é o: %d", valor3);
    }
    
    return 0;
}

