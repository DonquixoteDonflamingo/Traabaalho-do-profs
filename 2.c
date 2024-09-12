#include <stdio.h>

int main() {
int numero;
int soma = 0, quantidade = 0, quantidade_pares = 0, quantidade_impares = 0;
int maior, menor;
double media, media_pares, percentagem_impares;
int soma_pares = 0;
int primeiro_numero = 1;

    printf("Digite os números (30000 para encerrar):\n");

    while(1)
    {
        scanf("%d", &numero);

        if(numero == 30000)
        {
        break;
        }

        soma += numero;
        quantidade++;

        if(primeiro_numero)
        {
            maior = menor = numero;
            primeiro_numero = 0;
        }
        else
        {
            if(numero > maior)
            {
                maior = numero;
            }
            if(numero < menor)
            {
                menor = numero;
            }
        }

        if(numero % 2 == 0)
        {
            soma_pares += numero;
            quantidade_pares++;
        }
        else
        {
            quantidade_impares++;
        }
    }

    if(quantidade > 0)
    {
        media = (double)soma / quantidade;
        
        if(quantidade_pares > 0) {
            media_pares = (double)soma_pares / quantidade_pares;
        } else
        {
            media_pares = 0.0;
        }

        percentagem_impares = (double)quantidade_impares / quantidade * 100;
    }
    else
    {
        media = media_pares = percentagem_impares = 0.0;
    }

    printf("\nResultados:\n");
    printf("a. Soma dos numeros digitados: %d\n", soma);
    printf("b. Quantidade de numeros digitados: %d\n", quantidade);
    printf("c. Media dos numeros digitados: %.2f\n", media);
    printf("d. Maior numero digitado: %d\n", maior);
    printf("e. Menor numero digitado: %d\n", menor);
    printf("f. Media dos numeros pares: %.2f\n", media_pares);
    printf("g. Percentagem dos numeros impares: %.2f%%\n", percentagem_impares);

return 0;
}
