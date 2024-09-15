#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int X, Y, i = 0, calc = 1;
    bool passou = true;

    printf("Digite o valor de X: ");
    scanf("%d", &X);

    printf("Digite o valor de Y: ");
    scanf("%d", &Y);

    do {
        calc *= X;
        i++;
    } while(i < Y);

    printf("%d", calc);

    return 0;
}
