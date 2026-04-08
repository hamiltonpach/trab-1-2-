#include <stdio.h>

int main() {
    int vetor[5];
    int i;

    // leitura números
    printf("Digite 5 numeros:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    // impressao ordem inversa
    printf("\nVetor na ordem inversa:\n");
    for(i = 4; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    return 0;
}