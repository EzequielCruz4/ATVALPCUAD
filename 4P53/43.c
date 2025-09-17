/* Dados dois números reais e um caractere (+,-,*, /) representando uma operação a ser efetuada com eles, calcule e informe o resultado da operaçao). */

#include <stdio.h>

int main(void){
    float n1,n2,valor;
    char o;
    /* vou fazer de forma simples porque minha mente ainda não expandiu e eu não sei como faz tudo de uma vez KK */

    printf("Digite o primeiro numero:\n");
    scanf("%f",&n1);
    printf("Digite o segundo numero:\n");
    scanf("%f",&n2);
    printf("Agora digite a operacao:\n(+ para adicao - para subtracao * para multiplicacao ou / para divisao)\n");
    scanf(" %c",&o);
    /* tive um probleminha com essa linha de cima, se eu tiro o espaço antes do %c o codigo não roda mas se eu coloco ele roda */
    if ( o == '+' )
    {
        valor = n1 + n2;
        printf("O seu valor e: %.2f ", valor);
    }
    else if ( o == '-' )
    {
        valor = n1 - n2;
        printf("O seu valor e: %.2f ", valor);
    }
    else if ( o == '*')
    {
        valor = n1 * n2;
        printf("O seu valor e: %.2f ", valor);
    }
    else if ( o == '/')
    {
        valor = n1 / n2;
        printf("O seu valor e: %.2f" ,valor);
    }
    else printf("Digite uma operacao valida, tente novamente.");
return 0;}