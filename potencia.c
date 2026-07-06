#include <stdio.h>
int MDC(int a, int b);
int main() {
    int a, b, mdc;
    printf("Informe dois numeros inteiros para calcular o MDC:\n");
    scanf("%d %d", &a, &b);

    mdc = MDC(a, b);
    printf("O MDC de %d e %d eh: %d\n", a, b, mdc);

    return 0;
}
int MDC(int a, int b) {
    int r;
    while (b != 0) {
        r = b;
        b = a % b;
        a = r;
    }
    return a;
}