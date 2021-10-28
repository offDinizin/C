#include <stdio.h>
#include <locale.h>

int main()
{
   
    float metros;
    float centimetros;

    printf("Insira metros:\n");
    scanf("%f", &metros);
    centimetros=(metros*100);
    printf("Centimetros is %f",centimetros);
    
}
