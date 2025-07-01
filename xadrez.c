#include <stdio.h>

// Desafio de Xadrez - Nível Novato
// Simulação do movimento das peças: Torre, Bispo e Rainha
// Cada peça usa uma estrutura de repetição diferente: for, while, do-while

int main() {
    // Número de casas que cada peça vai se mover
    const int movimento_torre = 5;   // Direita
    const int movimento_bispo = 5;   // Diagonal: Cima e Direita
    const int movimento_rainha = 8;  // Esquerda

    // -----------------------------
    // Movimento da TORRE (FOR LOOP)
    // -----------------------------
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimento_torre; i++) {
        printf("Direita\n");
    }

    // -----------------------------
    // Movimento do BISPO (WHILE LOOP)
    // -----------------------------
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < movimento_bispo) {
        printf("Cima, Direita\n");
        j++;
    }

    // -----------------------------
    // Movimento da RAINHA (DO-WHILE LOOP)
    // -----------------------------
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < movimento_rainha);

    return 0;
}
