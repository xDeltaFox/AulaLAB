#include "./carry.h"

int contar_carry_aux(int a, int b, int carry)
{
    if (a == 0 && b == 0 && carry == 0)
        return 0;

    int dig_a = a % 10;
    int dig_b = b % 10;

    int soma = dig_a + dig_b + carry;

    if (soma >= 10)
        return 1 + contar_carry_aux(a / 10, b / 10, 1);
    else
        return contar_carry_aux(a / 10, b / 10, 0);
}

int contar_carry(int a, int b)
{
    return contar_carry_aux(a, b, 0);
}