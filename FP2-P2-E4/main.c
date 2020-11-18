//Ficha Prática 2 - Parte 2 - Exercicio 4

#include <stdio.h>

int main() {
    float teste1,teste2;
    printf("Introduza a nota do primeiro teste: ");
    scanf("%f", &teste1);
    printf("Introduza a nota do segundo teste: ");
    scanf("%f", &teste2);
    if (teste1>=0 && teste1<=20 && teste2>=0 && teste2<=20){
        if((teste1*0.4)+(teste2*0.6)>=9.5){
            printf("Aluno aprovado. Nota: %0.2f",(teste1*0.4)+(teste2*0.6));           
        }else{
            printf("Aluno reprovado. Nota: %0.2f",(teste1*0.4)+(teste2*0.6));
        }
    }else{
        printf("O calculo não é possivel porque a nota não está de 0 a 20!");
    }
    return 0;
}

