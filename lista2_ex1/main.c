#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    int idade, i = 0, m = 0, f = 0, somaIdade = 0, mediaIdade = 0;
    float peso, somaPeso, mediaPeso;

    do {

        printf("Digite seu sexo(m/M | f/F: ");
        scanf("%c", &sexo);

        printf("Digite sua idade: ");
        scanf("%d", &idade);

        printf("Digite seu peso: ");
        scanf("%f", &peso);

        i++;

        if(sexo == 'm' || sexo == 'M') {
            somaIdade += idade;
            m++;
        } else if(sexo == 'f' || sexo == 'F' ){
            somaPeso += peso;
            f++;
        }
        fflush(stdin);
    } while(i < 10);

    mediaIdade = somaIdade / m;
    mediaPeso = somaPeso / f;

    printf("A quantidade de homens eh de: %d\nA quantidade de mulheres eh de: %d\n", m, f);
    printf("A soma das idades dos homens eh de: %d\nA sua media eh de: %d\n", somaIdade, mediaIdade);
    printf("A soma dos pesos das mulheres eh de: %f\nA sua media eh de: %f", somaPeso, mediaPeso);

    return 0;
}
