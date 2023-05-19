#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Programa para saber a tabuada do seu numero
int main()
{

    int numero, i, idade, resultado;
    char nome[20], profissao[20], continuar_programa[10];

    printf("\t\t\t\t----------------Tabuada do seu numero--------------------------\n\n\n");
    printf("Queres iniciar o programa?\n\n------------Digite sim para continuar ou nao para terminar---------------\n");
    fgets(continuar_programa, 9, stdin);
    if (strcmp(continuar_programa, "sim\n") != 0)
    {
        printf("\nOk,tenho pena fica para um proxima!\n\n");
        system("pause");
        return 0;
    }
    else
    {
        printf("Boa! Seguimos entao!\n\n");
    }

    do
    {
        printf("Digite o seu nome por favor que foi utilizado como senha: ");
        fgets(nome, 19, stdin);
        fflush(stdin);
        if (strcmp(nome, "Miguel\n") != 0)
        {
            printf("Senha errada\n");
        }
    }

    while (strcmp(nome, "Miguel\n") != 0);

    printf("Senha correcta!!\n");
    printf("Qual a sua idade? ");
    scanf("%i", &idade);
    fflush(stdin);

    printf("Qual eh a sua profissao? ");
    fgets(profissao, 19, stdin);
    fflush(stdin);
    printf("\nSeu nome:%sSua idade:%i\nSua profissao:%s\n", nome, idade, profissao);

    printf("Digite o numero que deseja saber a tabuada por favor: ");
    scanf("%i", &numero);
    fflush(stdin);

    printf("numero %i eh a seguinte:\n\n", numero);

    for (i = 1; i <= 10; i++)
    {
        resultado = numero * i;
        printf("%ix%i=%i \n", numero, i, resultado);
    }

    system("pause");
    return 0;
}
