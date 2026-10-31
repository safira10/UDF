#include <stdio.h>
#include <math.h>

double potencia(double base, double expoente) {
    return pow(base, expoente);
}

int main() {
    double base, expoente;

    printf("===== PONTECIA =====\n");
    printf("Digite a base: ");
    scanf("%lf", &base);
    printf("Digite o expoente: ");
    scanf("%lf", &expoente);

    printf("Resultado: %.4f\n", potencia(base, expoente));
    
    return 0;
}
