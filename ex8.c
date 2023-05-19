#include <stdio.h>
#include <stdlib.h>
// Programa sobre decidir colocar gasolina ou Etanol usando uma funçao criada pelo programador

int calculo(float valorgasolina, float valoretanol)
{
    if (valorgasolina * 0.70 < valoretanol)
    {
        return 1;
    }
    else if (valorgasolina * 0.70 > valoretanol)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

int main()
{

    float precogasolina, precoetanol;
    int compensa;

    printf("Digite o valor a que esta neste momento a gasolina: ");
    scanf("%f", &precogasolina);

    printf("Digite o valor a que esta neste momento o Etanol: ");
    scanf("%f", &precoetanol);

    compensa = calculo(precogasolina, precoetanol);

    if (compensa == 1)
    {
        printf("Compensa mais voce colocar gasolina\n");
    }
    else if (compensa == 2)
    {
        printf("Compensa mais voce colocar Etanol\n");
    }
    else
    {
        printf("Os valores sao iguais, tanto faz um ou outro\n");
    }
    return 0;
}
