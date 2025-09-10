/* Dada uma distancia percorrida (em quilometros), bem como o total de combustivel gasto (em litros), informa o consumo medio do veiculo. */

#include <stdio.h>

int main(void){

    float a, b, c; /* Nesse float a gente seta as variaveis de KM e Combustivel */

    printf("Digite quantos KM foram percorridos: \n");
    scanf("%f", &a); /* pedimos a quantidade de KM e armazenamos ele na variavel "a" */

    printf("Digite a quantidade de combustivel gasto: \n");
    scanf("%f", &b); /* pedimos a quantidade de litros e armazenamos na variavel "b" */

    c = a / b; /* aqui a gente pede pro programa fazer o calculo */

    printf("A Quantidade de consumo medio do veiculo e: %.1fkm/L ", c);

    return 0;

}

 