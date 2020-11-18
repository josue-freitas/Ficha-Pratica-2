//Ficha Prática 2 - Parte 2 - Exercicio 3

#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    printf("Introduza a opção que deseja: ");
    scanf("%d", &opcao);
    switch (opcao){
        case 1:
            printf("Opção criar!");
            break;
        case 2:
            printf("Opção atualizar!");
            break;
        case 3:
            printf("Opção eliminar!");
            break;
        case 4:
            break;
        default:
            printf("Opção não é válida");
    }
    return 0;
}

