/* dadas as medidas de uma sala em metros (comprimento e largura), ingorme a sua área em metros quadrados. */

#include <stdio.h>

int main(void){
    float c, l, m;

    printf("Informe o comprimento e a largura: ");
    scanf("%f %f", &c, &l);

    m =  c*l;

    printf("a Area e %.2f mquadrados\n", m);

    return 0;
}