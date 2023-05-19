

#include <stdio.h>
#include <stdlib.h>

// Elabore um programa que lê uma sequência de valores, um de cada vez,
// o programa deverá terminar assim que forem introduzidos 4 valores pares.

int main()
{

    int n, numerospares = 0, soma = 0;
    float media;

    while (numerospares < 4)
    {

        printf("Digite um numero: ");
        scanf("%i", &n);

        if (n % 2 == 0)
        {
            soma = soma + n;
            numerospares++;
            printf("O numero %i eh par \n", n);
        }
    }
    printf("Voce inseriu 4 numeros pares \n\n");
    media = soma / 4.0;
    printf("A media dos numeros pares que inseriu eh: \n\n");
    printf("%.2f \n", media);

    return 0;
}
