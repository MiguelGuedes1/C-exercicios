
/*Faça um programa que receba o numero de horas trabalhadas por um gestor e o valor do salario minimo vigentes.

  Crie uma funçao que calcule o salario a receber do gestor,seguindo as regras abaixo:

     1) A hora trabalhada vale a metade do salario minimo
     2) O salario bruto equivale ao numero de horas trabalhadas multiplicado pelo valor da hora trabalhada
     3) O imposto equivale a 3% do salario bruto
     4) O salario a receber equivale ao salario bruto menos o imposto.

Crie um algoritmo qur invoque a respectiva funçao e mostre o salario a receber  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void salarioliquido(float horas_trabalhadas, float salariominimo, float *salario_a_receber)
{

    float valorhorastrabalhadas, salariobruto, imposto;

    valorhorastrabalhadas = salariominimo / 2.0;
    salariobruto = horas_trabalhadas * valorhorastrabalhadas;
    imposto = salariobruto * 3 / 100;
    *salario_a_receber = salariobruto - imposto;
}

int main()
{

    float numero_horas_trabalhadas[2], salariominimovigente[2], salariototalliquido[2];
    int f;

    for (f = 1; f <= 2; f++)
    {

        printf("Diga quantas horas o %i funcionario trabalhou este mes por favor: ", f);
        scanf("%f", &numero_horas_trabalhadas[f]);

        printf("Diga qual o salario minimo actualmente do %i funcionario: ", f);
        scanf("%f", &salariominimovigente[f]);
    }

    for (f = 1; f <= 2; f++)
    {

        salarioliquido(numero_horas_trabalhadas[f], salariominimovigente[f], &salariototalliquido[f]);

        printf("\n\nO salario do %i funcionario apos descontos e impostos eh o seguinte: \n%.2f\n", f, salariototalliquido[f]);
    }

    system("pause");
    return 0;
}
