/* Dado o tamanho de um arquivo (em bits), bem como a velocidade da conexão (em bits por segundo), informe o tempo necessário para download do arquivo */

#include <stdio.h>

int main(void){

    float arquivo, velocidade, tempo;
    int minutos, segundos;

    printf("Qual o tamanho do arquivo? (em bits) \n");
    scanf("%f", &arquivo);
    printf("Qual a velocidade da sua conexao? (em bits po segundo) \n");
    scanf("%f", &velocidade);

    tempo = arquivo/velocidade;

    minutos = (int)tempo / 60;
    segundos = (int)tempo % 60;


    printf("O tempo necessario seria %.1f\n", tempo);
    printf("Ou aproximadamente %d minutos e %d segundos\n", minutos, segundos);
    /* Acho que esse foi o meu melhor código até agora, gostei muito dessa parte dos minutos e segundos */

return 0;}