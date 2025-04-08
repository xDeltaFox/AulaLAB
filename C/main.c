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
    for (int i = 0; i < 2; i++)
    {
        /* code */
    }
    
}

int main() {
    printf("Digite dois numeros:");

    scanf("%d %d", &a, &b);

    printf("O MDC de %d e %d é %d", a, b, mdc(a,b));

    printf("\n\n");
    return 0;
}
