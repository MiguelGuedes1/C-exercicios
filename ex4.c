#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* kilowatt custa um milesimo do salario minimo. Faca um procedimento que receba o valor do salario minimo e quantidade
de kilowatts consumida por uma residencia. O procedimento deve calcular e retornar atraves de passagem de paramentros por
residencia:

a) O valor em euros de cada kilowatt
b) O valor em euros a ser pago por essa residencia
c) O valor em euros a ser pago com desconto de 15% */

int main()
{

    float salario_minimo, kwconsumidos, valor_em_euros, valor_por_residencia, valor_por_residencia15desconto;

    void calculo_kw(float salariominimo, float kwgastos, float *precokw, float *preco_por_residencia_, float *preco_com_desconto);

    printf("Insira o valor do salario minimo actual: ");
    scanf("%f", &salario_minimo);

    printf("Insira a quantidade de kw gastos este mes: ");
    scanf("%f", &kwconsumidos);

    calculo_kw(salario_minimo, kwconsumidos, &valor_em_euros, &valor_por_residencia, &valor_por_residencia15desconto);

    printf("\na)%.2f\nb)%.2f\nc)%.2f\n\n", valor_em_euros, valor_por_residencia, valor_por_residencia15desconto);

    system("pause");
    return 0;
}

void calculo_kw(float salariominimo, float kwgastos, float *precokw, float *preco_por_residencia_, float *preco_com_desconto)
{

    *precokw = salariominimo / 1000;                     // ja tenho quanto custa cada kw
    *preco_por_residencia_ = *precokw * kwgastos;        // ja tenho quanto a residencia vai pagar este mes
    *preco_com_desconto = *preco_por_residencia_ * 0.85; // ja tenho o preco com desconto de 15%
}
