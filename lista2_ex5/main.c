#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    float peso, media, FX1 = 0, FX2 = 0, FX3 = 0, FX4 = 0, media1, media2, media3, media4;

    for(int i = 0; i < 15; i++) {
        printf("Digite a idade e o peso de 15 pessoas: ");
        scanf("%d %f", &idade, &peso);

        if(idade >= 1 && idade <= 10) {
            f1++;
            FX1 += peso;
        } else if(idade >= 11 && idade <= 20) {
            f2++;
            FX2 += peso;
        } else if(idade >= 21 && idade <= 30) {
            f3++;
            FX3 += peso;
        } else if (idade > 31){
            f4++;
            FX4 += peso;
        }
    }

    media1 = FX1 / f1;
    media2 = FX2 / f2;
    media3 = FX3 / f3;
    media4 = FX4 / f4;

    printf("A media de pesos da faixa etaria de 1 a 10 eh de: %.2f\n", media1);
    printf("A media de pesos da faixa etaria de 11 a 20 eh de: %.2f\n", media2);
    printf("A media de pesos da faixa etaria de 21 a 30 eh de: %.2f\n", media3);
    printf("A media de pesos da faixa etaria de 31 anos para cima eh de: %.2f\n", media4);

    return 0;
}
