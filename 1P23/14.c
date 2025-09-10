/* Dados um salario e um percentual de reajuste, calcule o salario reajustado. considere que o percentual de reajuste é dado por um numero real entre 0 e 1. por exemplo, se o reajuste for 15% o usuario deve digitar o numero 0.15 */

#include <stdio.h>

int main(void){
    float r, s, ns;
    printf("Digite o valor do reajuste: ");
    scanf("%f",&r);
    printf("Digite o valor do seu salario: ");
    scanf("%f", &s);

    ns = s + (r*s);

    printf("O seu salario ficou: %.2f\n", ns);

    return 0;




}