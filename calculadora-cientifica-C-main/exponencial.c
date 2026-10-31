#include <stdio.h>
#include <math.h>

double exponencial(double x) {
    return exp(x);
}

int main() {
    double x;

    printf("===== EXPONENCIAL =====\n");
    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    printf("Resultado: %.4f\n", exponencial(x));

    return 0;
}