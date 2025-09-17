/* Dada uma letra (s,c,d ou v), informe o estado civil corrrespondente por extenso (Solteiro,Casado,Divorciado ou Viúvo) */

#include <stdio.h>

int main(void){
    char e;

    printf("Digite o seu estado civil: \n");
    scanf("%c",&e);

    if ( e == 's') printf("Seu estado civil corresponde a SOLTEIRO");
        else if ( e == 'c') printf("Seu estado civil corresponde a CASADO");
            else if ( e == 'd') printf("Seu estado civil corresponde a DIVORCIADO");
                else if ( e == 'v') printf("Seu estado civil corresponde a VIUVO");
    else printf("INVALIDO");

    /* primeiro eu tinha feito tudo só com if soq nao ia dar pra colocar o invalido no final dai eu meti tudo com else if e dps um else no final com invalido ( to com preguica de colocar virgula ent vai assim mesmo tmj ) */
return 0;}