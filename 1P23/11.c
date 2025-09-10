/* Dado um número real qualquer, informe qual é o seu dobro. */

#include <stdio.h>

int main(void){
    float a, b;
/* nessa linha de cima eu coloco o float pra trabalhar com numeros decimais, se eu quisesse inteiros eu trocava por int, claro. */

    printf("Informe o numero real: ");
    scanf("%f", &a );

    b = a*2;
/* declaramos que o B é iual a a*2 */

    printf("Dobro do numero real indicado = %.3f\n", b );
    /* dai a gente faz o printf aí e fala que o dobro do numero é o float .3 pra só mostrar 3 casas depois da virgula e depois a gente bota o, b pra indicar a variavel que vai ser impressa */

    return 0;
}