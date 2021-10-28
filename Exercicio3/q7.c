#include <stdio.h>



int main(){
    int a=0, b=1, auxiliar, n;

    do {
        printf("Insira o um valor: \t");
        scanf("%d", &n);
    } while (n<0);
    
    printf("Sequencia de fibonacci: %d, ", (a+b));

        for (int i = 0; i < n; i++)
        {
            auxiliar=a+b;      
            a= b;
            b= auxiliar;
            printf("%d, ", auxiliar);
        }
        
       
}