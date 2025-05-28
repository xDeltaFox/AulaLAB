#include "./math.h"

// Máximo Divisor Comum
int mdc(int num1, int num2)
{
    int resto;

    do
    {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;
    } while (resto != 0);

    return num1;
}

// Palindromo - Verifica se um numero pode ser lido de trás para frente ou vice-versa.
int ePalin(int n)
{
    int pot = 1;
    while (pot < n)
        pot *= 10;

    if (pot > n)
        pot /= 10;

    while (1)
    {
        int tamanho = n / pot, utamanho = n % 10;
        if (tamanho != utamanho)
            return 0;

        n = n - tamanho * pot - n % 10;
        pot /= 10;

        if (pot < 10)
            return 1;
    }
}

// fatorial
int fatorial(int n)
{
    if (n < 2)
        return 1;

    return n * fatorial(n - 1);
}

float porcentagem_valor(float total, float valor)
{
    return valor / total * 100;
}

float porcentagem_total(float total, float porcentagem)
{
    return porcentagem * total / 100;
}