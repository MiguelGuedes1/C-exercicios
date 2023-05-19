#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// usuario decide n elementos do vetor e no fim o programa tem que fazer a media

int main()
{

    int n, i, soma = 0;
    float media;

    printf("Insira o numero de elementos do seu vetor: "); // 4
    scanf("%d", &n);

    int vetor[n];

    for (i = 0; i < n; i++)
    {

        printf("Insira o %d elemento: ", i + 1);
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }

    media = (float)soma / n;

    printf("A media dos numeros do vetor eh:%.2f ", media);

    return 0;
}
