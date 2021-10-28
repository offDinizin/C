#include <stdio.h>
#include <locale.h>

int main()
{
   
    float horas;
    float granaporhora;
    float granatotal;

    printf("Insira as horas:\n");
    scanf("%f", &horas);
    printf("Insira quanto voce ganha por hora:\n");
        scanf("%f", &granaporhora);

    granatotal=(granaporhora*horas); 
    printf("Seu salario is: %.2f",granatotal);
}
