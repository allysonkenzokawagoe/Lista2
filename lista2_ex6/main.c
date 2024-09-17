#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, soma = 0, i = 0;
    float media;

    do {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);

        if(num != -99) {
            soma += num;
            i++;
        }

    } while(num != -99);

    media = soma / i;

    printf("A soma dos numero eh de: %d\nA media dos numeros eh de: %.2f", soma, media);

    return 0;
}
