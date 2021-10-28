
#include <stdio.h>

int main()
{
    int numero;
    char *array[9]=
    {
        "lave as maos",
        "passe alcool em gel",
        "use mascara",
        "cuide dos idosos",
        "cultive a paciencia",         
        "cultive a sabedoria",
        "ame o proximo",
        "exercite a disciplina",                            
        "acalme a mente",
    };
 
    printf("Digite um numero entre um e nove\n");
    scanf("%d", &numero);
    if (numero>0 && numero<10)    
    {
        numero--;
    printf("Sua mensagem eh\n%s",array[numero]);
    }
    else
    {
        printf("Numero invalido");
    }
}



