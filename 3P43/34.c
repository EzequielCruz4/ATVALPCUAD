/* Dados três números, verifique se eles podem ser medidas de um triângulo e, se puderem, classifique o triângulo como equilátero, isóscele ou escaleno. */
/* essa vai ser um saco pqp */

#include <stdio.h>

int main(void){
    int m1, m2, m3;

    printf("Digite as medidas: \n");
    scanf("%d %d %d", &m1, &m2, &m3);

    if (m1 + m2 > m3 && m2 + m3 > m1 && m3 + m1 > m2) {
        if (m1 == m2 && m2 == m3) {
            printf("O Triangulo e equilatero!\n");
        }
        else if (m1 == m2 || m1 == m3 || m2 == m3) {
            printf("O Triangulo e isosceles!\n");
        }
        else {
            printf("O Triangulo e escaleno!\n");
        }
    } else {
        printf("As medidas infelizmente nao formam um triangulo\n");
    }
/* nesse eu usei chat gpt, falhei como ser humano. peço perdão a todos aqueles que acreditaram em mim */
    return 0;
}

/* mas eu pratiquei bastante e entendi a logica, acho que consigo fazer sozinho. o problema é que ainda nao sei usar else if direito */