#include <stdio.h>



int main(){
    int a, b, soma=0;

    do {
        printf("Insira o menor valor: \t");
        scanf("%d", &a);
        printf("\nInsira o maior valor: \t");
        scanf("%d", &b);
    } while (a>=b);

    for (a; a < b; a++) {
        if (a%2==0) {
            soma=soma+a;
        }
    }
printf("A soma dos numeros pares eh: %d", soma);
}