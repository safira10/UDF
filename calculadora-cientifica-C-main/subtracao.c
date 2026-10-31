#include <stdio.h>

double subtracao(double a, double b) {
    return a - b;
}

int main() {
    double a, b;

    printf("====='SUBTRACAO=====\n");
    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Resultado: %.f\n", subtracao(a, b));
    return 0;

}