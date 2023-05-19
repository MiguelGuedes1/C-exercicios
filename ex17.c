// Faça um programa que seja capaz de armazenar os dados de tres funcionarios: nome,idade,antiga empresa e salario actual.
// No final mostre o nome e a idade da 1 pessoa e a antiga empresa e a altura da terceira pessoa

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct funcionarios
{

    char nome[20];
    int idade;
    char antiga_empresa[20];
    float salario_actual;
};

int main()
{

    struct funcionarios funcionario1;

    printf("\t\t\t\t\t\t--------------DADOS FUNCIONARIO 1------------------\n\n\n ");

    printf("Digite o seu nome por favor: ");
    fgets(funcionario1.nome, 19, stdin);

    printf("Digite a sua idade por favor: ");
    scanf("%i", &funcionario1.idade);
    getchar();

    printf("Diga qual a sua anterior empresa por favor: ");
    fgets(funcionario1.antiga_empresa, 19, stdin);

    printf("Diga qual o seu salario actual: ");
    scanf("%f", &funcionario1.salario_actual);
    getchar();

    printf("\t\t\t\t\t\t--------------DADOS FUNCIONARIO 2------------------\n\n\n ");

    struct funcionarios funcionario2;

    printf("Digite o seu nome por favor: ");
    fgets(funcionario2.nome, 19, stdin);

    printf("Digite a sua idade por favor: ");
    scanf("%i", &funcionario2.idade);
    getchar();

    printf("Diga qual a sua anterior empresa por favor: ");
    fgets(funcionario2.antiga_empresa, 19, stdin);

    printf("Diga qual o seu salario actual: ");
    scanf("%f", &funcionario2.salario_actual);
    getchar();

    printf("\t\t\t\t\t\t--------------DADOS FUNCIONARIO 3------------------\n\n\n ");

    struct funcionarios funcionario3;

    printf("Digite o seu nome por favor: ");
    fgets(funcionario3.nome, 19, stdin);

    printf("Digite a sua idade por favor: ");
    scanf("%i", &funcionario3.idade);
    getchar();

    printf("Diga qual a sua anterior empresa por favor: ");
    fgets(funcionario3.antiga_empresa, 19, stdin);

    printf("Diga qual o seu salario actual: ");
    scanf("%f", &funcionario3.salario_actual);
    getchar();

    printf("\n\nPrimeiro funcionario: \nnome:%s\nidade:%i\n\n", funcionario1.nome, funcionario1.idade);
    printf("\n\nTerceiro funcionario: \nAntiga empresa:%s\nSalario actual:%.2f\n\n", funcionario3.antiga_empresa, funcionario3.salario_actual);

    system("pause");
    return 0;
}
