/* Dado um número inteiro indicando uma operação num caixa eletrônico, informe a opção correspondente: 1 - saldo, 2 - extrato, 3 - saque,4 - sair. */

#include <stdio.h>

int main(void){
    char n;
    double saldo = 1500;

    printf("Digite: 1 para saldo, 2 para extrato, 3 para saque ou 4 para sair\n");
    scanf("%c",&n);

    if ( n == '1') { printf("Saldo = %.2f", saldo); }
    else if ( n == '2') { printf("Extrato = (imagina um extrato legal ai)"); }
    else if ( n == '3') { double valor;
        printf("Digite o valor pra saque: \n");
        scanf("%lf",&valor);
        if ( valor > saldo ) printf("saldo insuficiente");
        else if ( valor < saldo ){ double nvalor;
            nvalor = saldo - valor;
            printf("Saque concluido, o seu novo saldo e: %.2f", nvalor);
        }
    }

    else if ( n == '4') {
        return 0;
    }
    /* eu tinha começado a fazer resse codigo no dia 16 soq eu tava com muito sono dai eu desisti e enquanto eu tentava dormir eu tive varias ideias de como fazer o codigo KK. loucura */
        return 0;}

