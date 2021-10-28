#include <stdio.h>


int main(){
    int array[10], x[10] = {0,0,0,0,0,0,0,0,0,0}, soma = 0;

    printf("Digite 10 numeros:\n");

    for (int i = 0; i < 10; i++){
        printf("Digite o numero %d: \t", (i+1));
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 10; i++){
        if (array[i] > 40){
            x[i] = array[i];
        }
    }

    for (int i = 0; i < 10; i++){
        soma = soma + x[i];
    }

    printf("%d", soma);
}