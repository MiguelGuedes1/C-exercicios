#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Sequencia fibbonacci ... Crie um programa que mostre os 8 primeiros numeros da sequencia.

    int anterior2 = 0, anterior1 = 1, i, actual, termosutilizdor, termosreal;

    printf("Digite quantos termos da serie fibonacci deseja saber: "); // 10
    scanf("%i", &termosutilizdor);

    termosreal = termosutilizdor - 2;

    printf("%i\n", anterior2); // 0

    printf("%i\n", anterior1); // 1

    for (i = 0; i < termosreal; i++)
    {

        actual = anterior2 + anterior1;
        printf("%i\n", actual); // actual =1
        anterior2 = anterior1;  // 1
        anterior1 = actual;     // 1
    }

    system("pause");
    return 0;
}
