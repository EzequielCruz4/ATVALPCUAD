/* Dado o total de vendas de um vendedor. calcule a sua comissão. Suponha que a comissão do vendedor seja de 10% do total de vendas */

#include <stdio.h>

int main(void){
    float a, b;

    printf("Preco em vendas do vendedor: ");
    scanf("%f", &a );

    b = a*0.1;

    printf("O vendedor ganha de comissao = %.2f", b);

    return 0;
}