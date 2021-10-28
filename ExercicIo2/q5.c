#include <stdio.h>
#include <locale.h>

int main()
{


    float massa,altura,imc;


    printf("Insira sua massa em kg\n");
        scanf("%f", &massa);
    printf("Insira seu altura em metros\n");
        scanf("%f", &altura);

    imc= massa/(altura*altura);


  if (imc<=20)
  {
    printf("Abaixo do peso, IMC: %.2f", imc);  
  }
   else if (imc>20 && imc<=25)
  {
    printf("Peso normal, IMC: %.2f", imc);  
  }
  else if (imc>25 && imc<=30)
  {
    printf("Sobrepeso, IMC: %.2f", imc);  
  }
  else if (imc>30 && imc<=40)
  {
    printf("Obesidade, IMC: %.2f", imc);  
  }
  else
    {
        printf("Obesidade morbida, IMC: %f", imc);
    }
}