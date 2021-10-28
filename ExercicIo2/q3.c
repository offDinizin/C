#include <stdio.h>
#include <locale.h>

int main()
{
   
    float x,y;
     

    printf("Insira seu numerador\n");
        scanf("%f", &x);
    printf("Insira seu denominador\n");
        scanf("%f", &y);
  

    if ((int)x%(int)y==0) 
    {
      printf("Eh devisivel");
    }
    else
    {
      printf("Nao eh divisivel");
    }

}