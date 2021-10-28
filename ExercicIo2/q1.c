#include <stdio.h>
#include <locale.h>

int main()
{
   
    float a,b,c,media;
     

    printf("Insira sua primeira nota\n");
        scanf("%f", &a);
    printf("Insira sua segunda nota\n");
        scanf("%f", &b);
    printf("Insira sua terceira nota\n");
        scanf("%f", &c);
    media= (a+b+c)/3;

    if (media>=7) 
    {
      printf("Sua media foi: %2.2f\nParabens, você foi aprovado!", media);
    }
    else
    {
      printf("Sua media foi: %2.2f\nVocê fara prova nal!", media);
    }

    

}