#include <stdio.h>

int main() {
    int porcentagem;
    double salarioInicial, salarioNovo, aumentoReal;

    printf("Qual o salário inicial? R$");
    scanf("%lf", &salarioInicial);
    printf("Qual será o percentual de aumento? ");
    scanf("%i", &porcentagem);

    aumentoReal = salarioInicial * porcentagem / 100;
    salarioNovo = salarioInicial + aumentoReal;

    printf("\nO salário inicial era : R$%.2lf\n", salarioInicial);
    printf("O aumento foi de      : %i%\n", porcentagem);
    printf("O novo salário é      : R$%.2lf\n", salarioNovo);
    printf("O aumento real foi de : R$%.2lf\n", aumentoReal);

    return 0;
}