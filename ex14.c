#include <stdio.h>
#include <stdlib.h>

int main()
{

    char s[5], primeirapergunta[10], segundapergunta[10], terceirapergunta[10], quartapergunta[10];
    int scorefinal = 0, soma = 0;

    printf(" \t\t\t\t\t -------BEM VINDO AO MEU QUIZ GAME! :) ------------ \n\n");
    printf("Queres jogar? Clica na tecla S(sim) se quiseres, senao quiseres clica noutra tecla qualquer \n\n");
    scanf("%s", &s);
    if (s[0] == 's' || s[0] == 'S')
    {
        printf("\nBoa! Vamos iniciar o jogo entao! \n\n");
        printf("O seu jogo sera composto por 4 perguntas, cada resposta correcta sera acrescentado 5 pontos ao seu score final \n\n ");
        printf("Voce tera sempre 4 opcoes de resposta,A B C ou D \n\n");
        printf("Primeira pergunta: \n");
        printf("\n Qual eh a capital de Espanha?\n A)Barcelona\n B)Madrid\n C)Valencia\n D)Vigo\n\n");
        scanf("%s", &primeirapergunta);
        if (primeirapergunta[0] == 'b' || primeirapergunta[0] == 'B')
        {

            printf("\n\n Excelente voce acertou!! 5 pontos serao somados ao seu score!! \n\n");
            printf("\n Foi um bom inicio :) \n ");
            scorefinal = scorefinal + 5;
            soma++;
        }
        else
        {
            printf("\n A sua resposta esta errada");
        }

        printf("\n Seguimos para a segunda pergunta: \n\n");
        printf("Qual eh a capital de Italia? \n A)Roma \n B)Milao \n C)Napoles \n D)Veneza\n\n");
        scanf("%s", &segundapergunta);
        if (segundapergunta[0] == 'a' || segundapergunta[0] == 'A')
        {
            printf("\n\nEsta correcto muito bem!! 5 pontos serao adicionados \n");
            scorefinal = scorefinal + 5;
            soma++;
        }
        else
        {
            printf("\nResposta errada,lamento\n");
        }

        printf("\nPara tornar as coisas mais interessantes a proxima pergunta tera um nivel de dificuldade mais elevado :)\n");
        printf("\n Terceirapergunta:\n");
        printf("Qual eh a capital do Canada?\n A)Toronto\n B)Montreal\n C)Victoria \n D)Ottawa\n");
        scanf("%s", &terceirapergunta);
        if (terceirapergunta[0] == 'd' || terceirapergunta[0] == 'D')
        {
            printf("Esta correcto!! Muito bem!! Mais 5 pontos :)\n");
            scorefinal = scorefinal + 5;
            soma++;
        }

        else
        {
            printf("Resposta errada lamento\n");
        }

        printf("\nSeguimos agora para a quarta e ultima pergunta\n");
        printf("\nA quarta pergunta eh a seguinte: \n");
        printf("\nQual eh a capital do chile?\nA)Santiago\nB)Valparaiso\nC)Puerto Natales\nD)Punta Arenas\n");
        scanf("%s", &quartapergunta);
        if ((quartapergunta[0] == 'a' || quartapergunta[0] == 'A') && (primeirapergunta[0] == 'b' || primeirapergunta[0] == 'B') && (segundapergunta[0] == 'a' || segundapergunta[0] == 'A') && (terceirapergunta[0] == 'd' || terceirapergunta[0] == 'D'))
        {
            printf("\nUau voce eh um mestre em capitais, acertou todas as perguntas!! Muito bem!!");
            scorefinal = scorefinal + 5;
            soma++;
        }
        else if ((quartapergunta[0] == 'a' || quartapergunta[0] == 'A'))
        {
            printf("\A sua resposta esta correcta, muito bem!!");
            scorefinal = scorefinal + 5;
            soma++;
        }

        else
        {
            printf("Resposta errada,lamento\n\n");
        }
        printf("\n\t\t\t\t\t------------O JOGO TERMINOU-------------\n\n");
        printf("\nVoce acertou %i perguntas e a sua pontuacao final eh %i, parabens!!\n", soma, scorefinal);
        printf("\n\n\t\t\t\t\t-----------OBRIGADO POR PARTICIPAR-------------\n\n");

        system("pause");
    }
    else
    {
        printf("Tenho pena fica para uma proxima\n\n");
        system("pause");
        return 0;
    }
}
