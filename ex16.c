/* Simule uma calculadora Voce deve dar a opcao ao usuario de :
1- Somar
2- Subtrair
3- Multiplicar
4- Dividir.
O usuario so conseguira processar dois numeros inteiros */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{

    float n1, n2, soma, subtracao, multiplicacao, divisao;
    int escolha;

    printf("Please insert a number: ");
    scanf("%f", &n1);

    printf("Please insert other number : ");
    scanf("%f", &n2);
    getchar();

    printf("\n\nNext you will choose if you want add,subtract,divide or multiply your numbers!\n");

    while (1)
    {

        printf("\n\nType 1 to add\nType 2 to subtract\nType 3 to divide\nType 4 to multiply\n\n");
        scanf("%i", &escolha);

        soma = (float)n1 + n2;
        subtracao = (float)n1 - n2;
        multiplicacao = (float)n1 * n2;
        divisao = (float)n1 / n2;

        switch (escolha)
        {
        case 1:
            printf("\n\nThe add of your numbers is %.2f \n\n", soma);
            break;
        case 2:
            printf("\n\nThe subtraction of your numbers is %.2f.\n\n", subtracao);
            break;
        case 3:
            if (n2 == 0)
            {
                printf("\nImpossivel dividir o numero %.2f por zero\n", n1);
            }
            else
            {
                printf("\n\nThe division of your numbers is %.2f.\n\n", divisao);
            }
            break;
        case 4:
            printf("\n\nThe multiplycation of your numbers is %.2f.\n\n", multiplicacao);
            break;
        default:
            printf("\n\nYou choose a invalid option\nPlease choose a number between 1,2,3 or 4!\n\n");
            continue;
        }
        break;
    }

    system("pause");
    return 0;
}
