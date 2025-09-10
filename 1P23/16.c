/* Dados um valor em real e a cotação do dolar, converta esse valor em dolares */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float d, r, vrd;
    printf("Digite quantos reais: ");
    scanf("%f", &r);
    printf("Digite o valor do dolar: ");
    scanf("%f", &d);

    vrd = r / d;

    printf("O valor em dolares = %.2f\n", vrd);

    return 0;
}



