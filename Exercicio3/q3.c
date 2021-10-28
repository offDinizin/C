#include <stdio.h>



int main(){
    int a, b, divisor;
    float media, soma; 
    do {
        printf("Insira o menor valor: \t");
        scanf("%d", &a);
        printf("\nInsira o maior valor: \t");
        scanf("%d", &b);
    } while (a>=b);
    divisor=b-a;

    for (a; a < b; a++) {
            soma=soma+a;
    }
    media= soma/divisor;
printf("A media eh: %.2f", media);
}