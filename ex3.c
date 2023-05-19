// enumeradores

#include <stdio.h>
#include <stdlib.h>

enum ano
{
    Jan = 1,
    Fev,
    Mar,
    Abr,
    Mai,
    Jun,
    Julho,
    Agos,
    Setem,
    Outu,
    Novem,
    Dezem
};

int main()
{

    enum ano mesnascimento;

    mesnascimento = Fev;

    int x = mesnascimento;
    printf("%i\n\n", x);

    system("pause");
    return 0;
}
