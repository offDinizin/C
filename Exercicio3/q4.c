#include <stdio.h>



int main(){


    int a,resultado=1; 
    do {
        printf("Insira o numero a ser fatorado: \t");
        scanf("%d", &a);
    } while (a<=0);
    
    for (resultado; a>0; a--)
    {
        resultado=resultado*a;
    }
    printf("Fatorial eh:\t%d",resultado);
}