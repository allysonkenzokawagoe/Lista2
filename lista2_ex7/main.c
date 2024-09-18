#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i = 0, tinto = 0, branco = 0, rose = 0;
    char vinho;

    do{
        printf("Digite T para vinho Tinto, B para vinho Branco e R para vinho Rose(Digite F para encerrar): ");
        scanf("%c", &vinho);

        if(vinho == 'F') {
            printf("Encerrando!");
            break;
        }

        switch(vinho) {
            case 'T':
                tinto++;
                break;
            case 'B':
                branco++;
                break;
            case 'R':
                rose++;
                break;
            default:
                printf("Opção invalida!");
                break;
        }
        fflush(stdin);
        i++;
    } while(1);

    printf("A quantidade de vinho Tinto eh de: %d\n", tinto);
    printf("A quantidade de vinho Branco eh de: %d\n", branco);
    printf("A quantidade de vinho Rose eh de: %d\n", rose);

    printf("A quantidade total de vinhos na adega eh de: %d", i);

    return 0;
}
