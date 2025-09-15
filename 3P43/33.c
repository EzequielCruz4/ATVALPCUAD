/* Dada a idade de um nadador, informe a sua categoria: infantil ( até 10 anos ), juvenil ( até 17 ), ou sênior (acima de 17). */

#include <stdio.h>

int main(void){
    int idade;

    printf("Qual a sua idade? \n");
    scanf("%d", &idade);

    if (idade <= 10) printf("Voce e da categoria infantil\n");
    if (idade >= 11 && idade <= 17) printf("Voce e da categoria juvenil\n");
    if (idade >= 18) printf("Voce e da categoria senior\n");

    /* nesse eu penei muito porque eu esqueci as expressoes */

return 0;}
