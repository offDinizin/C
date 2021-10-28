#include <stdio.h>
#include <locale.h>

int main()
{
   
    float x;
     

    printf("Insira seu numero\n");
        scanf("%f", &x);
  

    if ((int)x%2==0) 
    {
      printf("Seu numero eh par");
    }
    else
    {
      printf("Seu numero eh impar");
    }

}