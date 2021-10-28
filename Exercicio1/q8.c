#include <stdio.h>
#include <locale.h>

int main()
{
   
    float salario;
     

    printf("Insira quanto voce ganha por mes:\n");
        scanf("%f", &salario); 
    printf("Seu salario bruto eh: %.2f\nO imposto total eh %.2f\nO sindicato custa %.2f\nO seu salario liquido eh %.2f\n", salario, salario*0.08, salario*0.05, salario*0.87 );
}