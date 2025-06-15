#include <stdio.h>

// Simulação de movimentação das peças: Torre, Bispo, Rainha e Cavalo

int main() {
    int i, j;

    // ----------- TORRE -----------
    // Movimento: 5 casas para a direita
    // Estrutura de repetição: for
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // ----------- BISPO -----------
    // Movimento: 5 casas na diagonal para cima e direita
    // Estrutura de repetição: while
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e direita):\n");
    i = 1;
    while (i <= 5) {
        printf("Cima Direita\n");
        i++;
    }

    // ----------- RAINHA -----------
    // Movimento: 8 casas para a esquerda
    // Estrutura de repetição: do-while
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    // ----------- CAVALO -----------
    // Movimento: duas casas para baixo e uma para a esquerda (em "L")
    // Estrutura de repetição: loops aninhados (for + while)
    printf("\nMovimento do Cavalo (2 casas para baixo e 1 casa para a esquerda):\n");

    // Loop externo com for (movimento para baixo)
    for (i = 1; i <= 2; i++) {
        printf("Baixo\n");

        // Loop interno com while (só executa na última iteração para simular o "L")
        j = 1;
        while (j <= 1 && i == 2) {
            printf("Esquerda\n");
            j++;
        }
    }

    return 0;
}
