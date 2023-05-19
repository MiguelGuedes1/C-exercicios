#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Crie um vetor e depois com a ajuda de uma funçao criada diga qual o numero maior e o menor do vetor

void descobrirmaiormenor(int *ma, int *me, int *vet, int tamanho)
{
    int i;
    *me = vet[0];
    *ma = vet[0];

    for (i = 1; i < tamanho; i++)
    {

        if (vet[i] < *me)
        {
            *me = vet[i];
        }
        if (vet[i] > *ma)
        {
            *ma = vet[i];
        }
    }
}

int main()
{

    int vetor[5] = {30, 10, 30, 600, 50}, maior, menor;

    descobrirmaiormenor(&maior, &menor, &vetor, 5);

    printf("\n\nO numero maior do vetor eh: %i\n\n", maior);
    printf("\n\nO numero menor do vetor eh: %i\n\n", menor);

    system("pause");
    return 0;
}
