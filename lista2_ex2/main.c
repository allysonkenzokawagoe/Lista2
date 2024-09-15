#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, numMaior, numMenor, soma = 0, i = 0;
    float media = 0;

    do {
        printf("Digite um numero inteiro e positivo: ");
        scanf("%d", &num);

        if(i == 0) {
            numMaior, numMenor = num;
        }

        if(num > numMaior) {
            numMaior = num;
        } else if(num < numMenor) {
            numMenor = num;
        }

        media += num;

        i++;
    } while(i < 10);

    media = media / i;

    printf("O maior valor eh: %d\nO menor valor eh: %d\nA media dos numeros eh: %.2f", numMaior, numMenor, media);

    return 0;
}
