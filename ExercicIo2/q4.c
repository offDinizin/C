#include <stdio.h>
#include <locale.h>


int maiorQue(a,b)
{
   int resultado;
   resultado=a-b;
    
    if (resultado>0  )
    {             
        return 1; 
    }
    else 
    {
          return 0;
    }
}
int main()
{


    int x,y,z;
     

    printf("Insira seu numero1\n");
        scanf("%d", &x);
    printf("Insira seu numero2\n");
        scanf("%d", &y);
  printf("Insira seu numero3\n");
        scanf("%d", &z);

  if (maiorQue(x,y) && maiorQue(x,z))
  {
    printf("O maior numero eh o %d", x);  
  }
   else if (maiorQue(y,x) && maiorQue(y,z))
  {
    printf("O maior numero eh o %d", y);  
  } 
  else
  {
    printf("O maior numero eh o %d", z);  
  }
}