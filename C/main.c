#include <stdio.h>

int a, b;

int mdc(int num1, int num2) {
    int resto;

    do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;
    } while (resto != 0);

    return num1;
}

int ePalin(int n) {
    int pot = 1;
    while (pot < n)
        pot *= 10;
    
    if(pot > n) pot /= 10;

    while (1)
    {
        int tamanho = n/pot, utamanho = n%10;
        if(tamanho != utamanho) return 0;

        n = n - tamanho * pot - n % 10;
        pot /= 10;

        if(pot<10) return 1;
    }
}

int main() {
    printf("Digite dois numeros:");

    scanf("%d %d", &a, &b);

    printf("O MDC de %d e %d é %d", a, b, mdc(a,b));

    printf("\n\n");
    return 0;
}
