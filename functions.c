#include <stdio.h>

double calcularMedia(double a, double b) {
    double soma = a + b;
    return soma / 2.0;
}

int main() {
    // Chamando a função e armazenando o resultado
    double mediaFinal = calcularMedia(8.0, 7.5);

    printf("A média é: %.2f\n", mediaFinal); // Saída: A média é: 7.75

    return 0;
}