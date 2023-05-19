#include <stdio.h>
#include <stdlib.h>

// Exercicio com matriz, encontrar numero numa matriz inserida pelo utilizador e dizer a sua posiçao

int main()
{

    int matriz[3][3], l, c, x, numeroencontrado = 0, lin, col; // l= linhas c=colunas

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("\n Digite o numero da linha %i,coluna %i:\n", l, c);
            scanf("%i", &matriz[l][c]);
        }
    }
    printf("\n\nDigite o numero que deseja procurar na matriz: ");
    scanf("%i", &x);

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            if (matriz[l][c] == x)
            {
                numeroencontrado = 1;
                lin = l;
                col = c;
            }
        }
    }
    if (numeroencontrado == 1)
    {
        printf("O seu numero %i esta na matriz na linha %i e na coluna %i,\n\n", x, lin, col);
    }
    else
    {
        printf("O seu numero nao esta na matriz\n\n");
    }
    system("pause");
    return 0;
}
