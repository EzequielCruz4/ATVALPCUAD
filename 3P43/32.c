/* Numa fábrica, uma máquina precisa de manutenção sempre que o número de peças defeituosas supera 10% da produção. Dados o total de peças produzidas e o total de peças defeituosas, informe se a máquina precisa de manutenção */

#include <stdio.h>

int main(void){
    int pro,def;

    printf("Quanto foi produzido?: \n");
    scanf("%d", &pro);

    printf("Quantas pecas foram defeituosas? \n");
    scanf("%d", &def);

    if ( def >= (0.10 * pro)) printf("A Maquina precisa de manutencao\n");
    else printf("A maquina pode continuar!\n");

    /* nossa nesse codigo aqui eu cometi varias burradas, mas bola pra frente! kk ninguém nunca nem vai saber oque foi mesmo */
    return 0;}