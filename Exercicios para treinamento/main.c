/******************************************************************************
autor : Leonardo Carvalho
Verifica se o numero escolhido é impar ou par.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite o número que deseja descobrir se é impar ou par");
    scanf("%i" &num);
    
    if(num % 2 == 0 ){
    	printf("O número %d é par", num);
    }
    else
    	printf(" O numero %d é impar", num);
    

    return 0;
}

