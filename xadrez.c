#include <stdio.h>

// Definição de constantes para os limites de movimentação de cada peça
const int PASSOS_BISPO = 5;
const int PASSOS_TORRE = 5;
const int PASSOS_RAINHA = 8;

int main() {
    // ---- MOVIMENTAÇÃO DO BISPO (Usando o loop FOR) ----
    // O Bispo se move na diagonal superior direita. 
    // Para cada passo na diagonal, ele avança uma casa para Cima e uma para a Direita.
    printf("--- Movimentacao do Bispo (%d casas na diagonal superior direita) ---\n", PASSOS_BISPO);
    
    for (int i = 0; i < PASSOS_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");


    // ---- MOVIMENTAÇÃO DA TORRE (Usando o loop WHILE) ----
    // A Torre se move linearmente para a direita.
    printf("--- Movimentacao da Torre (%d casas para a direita) ---\n", PASSOS_TORRE);
    
    int contadorTorre = 0; // Inicialização da variável de controle
    while (contadorTorre < PASSOS_TORRE) {
        printf("Direita\n");
        contadorTorre++; // Incremento para evitar loop infinito
    }
    printf("\n");


    // ---- MOVIMENTAÇÃO DA RAINHA (Usando o loop DO-WHILE) ----
    // A Rainha se move linearmente para a esquerda.
    printf("--- Movimentacao da Rainha (%d casas para a esquerda) ---\n", PASSOS_RAINHA);
    
    int contadorRainha = 0; // Inicialização da variável de controle
    do {
        printf("Esquerda\n");
        contadorRainha++; // Incremento da variável de controle
    } while (contadorRainha < PASSOS_RAINHA);
    printf("\n");

    return 0;
}