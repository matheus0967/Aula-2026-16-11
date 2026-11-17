#include <stdio.h>

double calcularArea(double a, double b) {
    return a * b;
}

double calcularPerimetro(double a, double b) {
    return (a + b) * 2.0;
}

int main() {

    double base1 = 10.0, altura1 = 30.0;
    double area1 = calcularArea(base1, altura1);
    double perimetro1 = calcularPerimetro(base1, altura1);
  
    double base2 = 10.0, altura2 = 25.0;
    double area2 = calcularArea(base2, altura2);
    double perimetro2 = calcularPerimetro(base2, altura2);
    
    printf("--- Retangulo R1 ---\n");
    printf("Area: %.2f\n", area1);
    printf("Perimetro: %.2f\n\n", perimetro1);

    printf("--- Retangulo R2 ---\n");
    printf("Area: %.2f\n", area2);
    printf("Perimetro: %.2f\n", perimetro2);

    return 0;
}
