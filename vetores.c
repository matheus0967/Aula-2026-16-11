#include <stdio.h>

int main() {
    int N;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    // Vetor de tamanho variável (VLA, C99): o tamanho só é conhecido em tempo de execução
    double vet[N];

    // Laço para ler e armazenar cada número no vetor
    for (int i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    // Laço para imprimir os elementos do vetor
    printf("\nNUMEROS DIGITADOS:\n");
    for (int i = 0; i < N; i++) {
        printf("%.1f\n", vet[i]);
    }

    return 0;
}