//Ficha Prática 2 - Parte 2 - Exercicio 5

#include <stdio.h>

int main() {
    int x,y;
    printf("Introduza a coordenada x: ");
    scanf("%d", &x);
    printf("Introduza a coordenada y: ");
    scanf("%d", &y);
    if (x==0 && y==0){
        printf("Ponto está na origem (0,0)");
    }else{
        if(x<0 && y>=0){
            printf("Ponto está no Quadrante 2");
        }else{
            if(x>=0 && y>=0){
                printf("Ponto está no Quadrante 1");
            }else{
                if(x<0 && y<0){
                    printf("Ponto está no Quadrante 3");
                }else{
                    printf("Ponto está no Quadrante 4");
                }
            }
        }
    }
    return 0;
}

