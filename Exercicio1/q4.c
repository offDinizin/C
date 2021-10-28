#include <stdio.h>
#include <locale.h>

int main()
{
   
    float raio;
    float area;

    printf("Insira o raio:\n");
    scanf("%f", &raio);
    area=(raio*raio)*3.14; 
    printf("Valor da area aproximadamente: %.2f",area);
}
