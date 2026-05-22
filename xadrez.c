#include <stdio.h>

// Definição de constantes para o movimento em L do Cavalo
// Neste exemplo: 2 passos para baixo e 1 para a esquerda
const int PASSOS_VERTICAIS = 2;
const int PASSOS_HORIZONTAIS = 1;

int main() {
    printf("--- Movimentacao do Cavalo (Em L: Baixo e Esquerda) ---\n");

    // Loop Externo (FOR): Controla os passos para Baixo
    for (int i = 0; i < PASSOS_VERTICAIS; i++) {
        printf("Baixo\n");

        // Condicional para realizar o movimento para a esquerda apenas 
        // após o Cavalo ter feito toda a sua movimentação para baixo.
        if (i == PASSOS_VERTICAIS - 1) {
            int j = 0; // Inicialização da variável do loop interno
            
            // Loop Interno Aninhado (WHILE): Controla os passos para a Esquerda
            while (j < PASSOS_HORIZONTAIS) {
                printf("Esquerda\n");
                j++; // Incremento para controle do While
            }
        }
    }

    return 0;
}