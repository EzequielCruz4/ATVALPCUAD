/* Dadas as medidas de uma sala em metros (comprimento e largura), bem como o preço do metro quadrado de carpete, inforrme o custo toal para forrar o piso da sala. */

#include <stdio.h>

int main (void){

    float comprimento, largura, carpete, area, custo; /* cansei de comentar rapaziada, eu duvido que alguém vá ler isso de qualquer forma */

    printf("Digite o Comprimento e a Largura: \n");
    scanf("%f %f", &comprimento ,&largura);

    printf("Agora digite o preco por metro quadrado do carpete: \n");
    scanf("%f", &carpete);

    area = comprimento * largura;
    custo = area * carpete;

    printf("o custo de carpete por metro quadrado e de: %.2f", custo);


    return 0;}