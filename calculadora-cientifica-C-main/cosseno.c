#include <stdio.h>
#include <math.h>

double cosseno(double angulo_rad) {
    return cos(angulo_rad);
}

int main() {
    double angulo;

    printf("===== COSSENO =====\n");
    printf("Digite o angulo em RADIANOS: ");
    scanf("%lf", &angulo);

    printf("Resultado: %.4f\n", cosseno(angulo));

    return 0;
}