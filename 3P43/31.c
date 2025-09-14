/* Numa papelaria, até 100 folhas, a cópia custa 0,25R$, e acima de 100 folhas custa R$ 0,20. Dado o total de cópias, informe o total a ser pago. */

#include <stdio.h>

int main(void){
    int copias;
    float preco1, preco2, total;
    preco1 = 0.25;
    preco2 = 0.20;

    printf("Quantas copias? \n");
    scanf("%d", &copias);
    if (copias > 100){
        total = copias * preco2;
        printf("Voce deve pagar: %.2fR$", total);
    } else {
        total = copias * preco1;
        printf("Voce deve pagar: %.2fR$", total);
    }

    /* tenho que fazer meu comentariro né, eu achei o codigo bem legal, não sei se eu fiz da forma mais correta possivel mas tá aí */

return 0;}