#include <stdio.h>

int main() {
int ano_contratacao = 2005;
int ano_atual = 2024;
double salario_inicial = 1000.00;
double salario = salario_inicial;
double percentual_aumento = 1.5 / 100;

    salario += salario_inicial * percentual_aumento;

    for(int ano = 2007; ano <= ano_atual; ano++)
    {
        percentual_aumento *= 2;
        salario += salario_inicial * percentual_aumento;
    }

    printf("O salario atual em %d e: R$ %.2f\n", ano_atual, salario);

return 0;
}
