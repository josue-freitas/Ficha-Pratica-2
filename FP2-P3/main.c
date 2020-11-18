//Ficha Prática 2 - Parte 3

#include <stdio.h>

int main() {
    char cargo;
    int codigo, dias;
    printf("Introduza o código do funcionário: ");
    scanf("%d", &codigo);
    printf("Introduza o cargo do funcionário: ");
    scanf(" %c,", &cargo);
    printf("Introduza quantos dias o funcionário trabalhou: ");
    scanf("%d", &dias);
    switch (cargo){
        case 'e':
            printf("Vencimento ilíquido: %d\n", (40*dias));
            printf("Subsidio de alimentação: %d\n", (5*dias));
            printf("Valor que o funcionário entrega à Segurança Social: %0.2f\n",(40*dias)*0.11);    
            printf("Valor que a entidade patronal entrega à Segurança Social: %0.2f\n",(40*dias)*0.2375);
            if ((40*dias)<1000){
                printf("Retenção IRS a entregar ao estado: %0.2f\n",(40*dias)*0.1);
                printf("Vencimento líquido: %0.2f\n", ((40*dias)-((40*dias)*0.1))-((40*dias)*0.11));
            }else{
                printf("Retenção IRS a entregar ao estado: %0.2f\n",(40*dias)*0.2);
                printf("Vencimento líquido: %0.2f\n", ((40*dias)-((40*dias)*0.2))-((40*dias)*0.11));
            }               
            break;
        case 'c':
            printf("Vencimento ilíquido: %d\n", (60*dias));
            printf("Subsidio de alimentação: %0.2f\n", (7.5*dias));
            printf("Valor que o funcionário entrega à Segurança Social: %0.2f\n",(60*dias)*0.11);    
            printf("Valor que a entidade patronal entrega à Segurança Social: %0.2f\n",(60*dias)*0.2375);
            if ((60*dias)<1000){
                printf("Retenção IRS a entregar ao estado: %0.2f\n",(60*dias)*0.1);
                printf("Vencimento líquido: %0.2f\n", ((60*dias)-((60*dias)*0.1))-((60*dias)*0.11));
            }else{
                printf("Retenção IRS a entregar ao estado: %0.2f\n",(60*dias)*0.2);
                printf("Vencimento líquido: %0.2f\n", ((60*dias)-((60*dias)*0.2))-((60*dias)*0.11));
            }
            break;
        case 'a':
            printf("Vencimento ilíquido: %d\n", (80*dias));
            printf("Subsidio de alimentação: %0.2f\n", (7.5*dias));
            printf("Valor que o funcionário entrega à Segurança Social: %0.2f\n",(80*dias)*0.09);    
            printf("Valor que a entidade patronal entrega à Segurança Social: %0.2f\n",(80*dias)*0.21);
                
            if ((80*dias)<1000){
                printf("Retenção IRS a entregar ao estado: %0.2f\n",(80*dias)*0.1);
                printf("Vencimento líquido: %0.2f\n", ((80*dias)-((80*dias)*0.1))-((80*dias)*0.09));
            }else{
                printf("Retenção IRS a entregar ao estado: %0.2f\n",(80*dias)*0.2);
                printf("Vencimento líquido: %0.2f\n", ((80*dias)-((80*dias)*0.2))-((80*dias)*0.09));
            }
            break;
    }                
    return 0;
}

