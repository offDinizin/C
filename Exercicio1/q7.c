#include <stdio.h>
#include <locale.h>

int main()
{
   
    int dias;
    float km,total;



    printf("Insira os dias alugados:\n");
        scanf("%d",&dias);
    printf("Insira os km rodados: \n");
        scanf("%f",&km);
    
    total=(((float)dias*60)+(km*0.15));
    printf("O total a pagar eh R$ %2.2f", total);
        
}
      