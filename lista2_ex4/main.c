#include <stdio.h>
#include <stdlib.h>

int main()
{
    int operador;
    float n1, n2, conta;

    do {
        printf("Selecione uma das opcoes: '1-Multiplicar', '2-Somar', '3-Subtrair', '4-Dividir', '5-Sair': ");
        scanf("%d", &operador);

        if(operador != 5) {
            printf("Digite o valor do primeiro numero: ");
            scanf("%f", &n1);

            printf("Digite o valor do segundo numero: ");
            scanf("%f", &n2);
        }

        if(operador == 1) {
            conta = n1 * n2;
        } else if(operador == 2) {
            conta = n1 + n2;
        } else if(operador == 3) {
            conta = n1 - n2;
        } else if(operador == 4) {
            conta = n1 / n2;
        } else if(operador <= 0 || operador > 5) {
            printf("Digite um numero valido: ");
        }
    } while(operador != 5);

    printf("%.2f", conta);

    return 0;
}
