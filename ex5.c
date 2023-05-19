#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Faça um programa que permita introduzir as notas de 15 alunos
e que indique qual a nota mínima e máxima, bem como a média.
                            Nota: O programa só aceita valores entre 0 e 20.

*/

int main()
{

    int nota[15], i, nota_mais_alta, nota_mais_baixa, soma = 0;
    float media;

    nota_mais_alta = 0;
    nota_mais_baixa = 20;

    for (i = 0; i < 15; i++)
    {
        do
        {
            printf("Digite a nota que tirou no teste: \n");
            scanf("%i", &nota[i]);

            if (nota[i] < 0 || nota[i] > 20)
            {
                printf("A nota inserida tem que ser entre 0 e 20 valores\n");
            }
        } while (nota[i] < 0 || nota[i] > 20);
        soma = soma + nota[i];

        if (nota[i] < nota_mais_baixa)
        {
            nota_mais_baixa = nota[i];
        }
        if (nota[i] > nota_mais_alta)
        {
            nota_mais_alta = nota[i];
        }
        media = soma / 15.0;
    }
    printf("\n\nNota mais baixa: %i \n\nNota mais alta: %i\n\nMedia: %.2f \n\n", nota_mais_baixa, nota_mais_alta, media);

    system("pause");
    return 0;
}
