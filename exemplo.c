#include <stdio.h>

void funcaoF() {
    int x = 10; // 'x' só existe aqui dentro
    printf("Dentro da funcaoF, x = %d\n", x);
}

void funcaoG() {
    int x = 99; // Este é outro 'x', totalmente diferente do anterior
    printf("Dentro da funcaoG, x = %d\n", x);
    // printf("%d", x); // O 'x' de funcaoF não existe aqui — são variáveis independentes
}