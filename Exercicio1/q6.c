#include <stdio.h>
#include <locale.h>

int main()
{
   
    int total,nulos,brancos,validos;
    float pnulos, pbrancos, pvalidos;


    printf("Insira os votos nulos:\n");
        scanf("%d", &nulos);
    printf("Insira os votos brancos: \n");
        scanf("%d", &brancos);
    printf("Insira os votos validos: \n");
        scanf("%d", &validos);

    total=((float)nulos+brancos+validos);
    pbrancos=((float)brancos/total*100);
    pnulos=((float)nulos/total*100);
    pvalidos=((float)validos/total*100);
      
      printf("o seu total eh %d \no percentual de nulos eh %2.2f %% \no percentual de brancos eh %2.2f %%\no percentual de validos eh %2.2f %%\n", total, pnulos, pbrancos, pvalidos);

    

} 