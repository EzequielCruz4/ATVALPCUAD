/* O índice de massa corpórea (IMC) de uma pessoa é igual ao seu peso (em quilogramas) dividido pelo quadrado de sua altura (em metros). Dados o peso e a altura de uma pessoa, informe o vlaor de seu IMC */

#import <stdio.h>

int main (void){

    float peso, altura, IMC;
    printf("Digite a sua Altura: \n"); /* eu não aguento mais essas atividades que são mais do mesmo zzzzzzzzzzzz, vou tentar fazer bonitinho dessa vez */
    scanf("%f", &altura);

    printf("Digite o seu Peso: \n");
    scanf("%f", &peso);

    IMC = peso / (altura * altura); /* acabou que ficou uma porcaria KSKSKSKSKSK */

    printf("O seu IMC e: %.1f", IMC);

    return 0;} /* que questão sem graça */