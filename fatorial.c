#include <stdio.h>

unsigned int fatorial (int valor)
{   
    if( valor <= 1)
    return 1;
    
    valor = valor * fatorial( valor - 1 );
    return valor;
}

int main()
{
    int valor;
    unsigned int fat;
    printf("Insira um inteiro  não negativo: ");
    scanf("%d", &valor);
    
    fat = fatorial(valor);
    
    printf("o valor de fatorial é %u \n", fat);
    

    return 0;
}
