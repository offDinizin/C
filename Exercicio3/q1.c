#include <stdio.h>



int main(){
    int a, b;

    do {
        printf("Insira o menor valor: \t");
        scanf("%d", &a);
        printf("\nInsira o maior valor: \t");
        scanf("%d", &b);
    } while (a>=b);

    printf("Os multiplos de 3 sao: \t");
    for (a; a < b; a++) {
        if (a%3==0) {
            printf("%d, ", a);
        }
    }
}