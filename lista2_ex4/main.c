#include <stdio.h>
#include <stdlib.h>

int main()
{

    int opcao, n1, n2;
    float conta;

    do{
        printf("Escolha um opcao = (1-Multiplicar, 2-Somar, 3-Subtrair, 4-Dividir, 5-Encerrar): ");
        scanf("%d", &opcao);

        if(opcao <= 5) {
            printf("Digite o numero 1: ");
            scanf("%d", &n1);
            printf("Digite o numero 2: ");
            scanf("%d", &n2);
        }

        switch(opcao) {
            case 1:
                conta = n1 * n2;
                break;
            case 2:
                conta = n1 + n2;
                break;
            case 3:
                conta = n1 - n2;
                break;
            case 4:
                conta = n1 / n2;
                break;
            case 5:
                printf("Encerrando!");
                break;
            default:
                printf("Opcao invalida! Digite novamente.\n");
                break;
        }

        if(opcao != 5 && opcao <= 5) {
            printf("%.2f\n", conta);
        }

    } while(opcao != 5);

    return 0;
}
