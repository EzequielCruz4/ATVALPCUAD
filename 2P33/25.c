/* Dados um capital C, uma taxa de juros mensal fixa J e um período de aplicaçao em meses M, informe o montante F no final do período (F= C*(1+J/100)M). */
/* Essa tá bem confusa (na verdade acho que eu só tô sendo burro mesmo) */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    float Capital, Juros, Meses, Final;

    printf("Informe o seu Capital: \n");
    scanf("%f", &Capital);
    printf("Informe os Juros: \n");
    scanf("%f", &Juros);
    printf("Agora nos informe o periodo de aplicacao em Meses: \n");
    scanf("%f", &Meses);

    Final = Capital * pow((1+Juros/100), Meses);

    printf("O montante final e: %.2f", Final);

return 0;}

/* penei bastante porque eu esqueci que era elevado aos meses, enfim. finalmente usando #include <math.h> */