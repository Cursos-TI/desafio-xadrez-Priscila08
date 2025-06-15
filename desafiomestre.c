#include <stdio.h>

// Função recursiva para mover a Torre para a Direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover a Rainha para a Esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o movimento vertical do Bispo
void moverBispoVertical(int casas, int totalCasas) {
    if (casas > totalCasas) return;

    // Loop aninhado para simular movimento horizontal junto com o vertical
    for (int i = 0; i < 1; i++) {
        printf("Cima Direita\n");
    }

    moverBispoVertical(casas + 1, totalCasas);
}

// Movimento complexo do Cavalo: duas casas para cima e uma para a direita
void moverCavalo() {
    int i, j;

    printf("\nMovimento do Cavalo (2 casas para cima e 1 para a direita):\n");

    // Loop externo para direção vertical
    for (i = 1; i <= 2; i++) {
        if (i == 2) {
            // Ao atingir a 2ª casa para cima, entra no movimento horizontal
            for (j = 1; j <= 1; j++) {
                if (j != 1) {
                    continue;  // só entra se j == 1
                }
                printf("Direita\n");
                break; // movimento completo
            }
        }
        printf("Cima\n");
    }
}

int main() {
    // Quantidade de casas por peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ---------------- TORRE ----------------
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(casasTorre);

    // ---------------- BISPO ----------------
    printf("\nMovimento do Bispo (5 casas na diagonal Cima Direita):\n");
    moverBispoVertical(1, casasBispo);

    // ---------------- RAINHA ----------------
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(casasRainha);

    // ---------------- CAVALO ----------------
    moverCavalo();

    return 0;
}
