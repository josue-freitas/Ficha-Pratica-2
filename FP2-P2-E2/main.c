//Ficha Prática 2 - Parte 2 - Exercicio 2

#include <stdio.h>

int main() {
    float saldo, montante;
    printf("Introduza o seu saldo: ");
    scanf("%f", &saldo);
    printf("Introduza o montante: ");
    scanf("%f", &montante);
    if(montante>0){
        printf("Operação realizada! Saldo positivo");
    }else{
        if(saldo+montante>=0){
            printf("Operação realizada! Saldo positivo");
        }else{
            printf("Operação não foi realizada! Saldo negativo");
        }
    }
    return 0;
}