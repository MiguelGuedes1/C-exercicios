#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Faça um programa que leia os dados de 2 funcionarios de uma empresa inseridos pelo utilizador( nome,idade,salario
actual e performance no ultimo ano(0 a 5)). Se a performance tiver sido igual ou superior a 4
o programa tem que dizer quais foram os funcionarios e seus respectivos nomes e dar um aumento de 10% no salario*/

#define tam 50

struct dados_funcionario
{
    char nome[tam];
    int idade, performance;
    float salario;
};

int main()
{
    int i;
    struct dados_funcionario dados[4];
    float novo_salario;

    for (i = 1; i <= 4; i++)
    {
        printf("Digite o nome do %iº funcionario: ", i);
        fgets(dados[i].nome, 49, stdin);

        printf("Digite a idade do %iº funcionario: ", i);
        scanf("%i", &dados[i].idade);
        getchar();

        printf("Digite o salario do %iº funcionario: ", i);
        scanf("%f", &dados[i].salario);
        getchar();

        printf("Digite a performance do %iº funcionario(0 a 5): ", i);
        scanf("%i", &dados[i].performance);
        getchar();
    }

    printf("\n\n\t\t\t\t\t---------MELHORES FUNCIONARIOS------------- \n");

    for (i = 1; i <= 4; i++)
    {
        if (dados[i].performance >= 4)
        {
            novo_salario = dados[i].salario * 1.10;
            printf("%s: Seu novo salario eh:%.2f \n", dados[i].nome, novo_salario);
        }
    }

    system("pause");
    return (0);
}
