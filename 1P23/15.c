/* Dados o valor da compra e o percentual de desconto, calcule o valor a ser pago. Considere que o percentual de desconto é um numero real entre 0 e 1 */

#include <stdio.h>

int main(void){
    float c, d, vp;

    printf("Digite o valor da compra: ");
    scanf("%f", &c);
    printf("Digite o valor do desconto: ");
    scanf("%f", &d);

    vp = c - (c*d);

    printf("Voce deve pagar: %.2f", vp);
    return 0;

}