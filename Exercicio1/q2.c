#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL,"Portuguese");
    int numero1,numero2;
    int resultado; 
    printf("Digite dois numeros\n");
    scanf("%d %d", &numero1,&numero2);
    resultado=numero2*numero1;
    printf("Result is %d\n",resultado);
    
}

