#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL,"Portuguese");
    int numero; 
    printf("Insert your number\n");
    scanf("%d", &numero);
    printf("Numero digitado:\n %d",numero);
}


