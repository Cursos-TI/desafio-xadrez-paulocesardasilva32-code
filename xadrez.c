#include <stdio.h>

// --- DECLARAÇÃO DAS FUNÇÕES RECURSIVAS ---
void moverTorreRecursivo(int passos);
void moverRainhaRecursivo(int passos);
void moverBispoRecursivoAninhado(int passosVerticais, int passosHorizontais);

int main() {
    // 1. MOVIMENTAÇÃO DA TORRE (Função Recursiva)
    printf("--- Movimentacao da Torre (5 casas para a Direita - Recursivo) ---\n");
    moverTorreRecursivo(5);
    printf("\n");

    // 2. MOVIMENTAÇÃO DA RAINHA (Função Recursiva)
    printf("--- Movimentacao da Rainha (8 casas para a Esquerda - Recursivo) ---\n");
    moverRainhaRecursivo(8);
    printf("\n");

    // 3. MOVIMENTAÇÃO DO BISPO (Funções/Loops Aninhados Recursivos)
    // Para mover na diagonal direita para cima, ele precisa ir para Cima e para a Direita de forma síncrona.
    printf("--- Movimentacao do Bispo (5 casas na Diagonal Direita para Cima) ---\n");
    moverBispoRecursivoAninhado(5, 5);
    printf("\n");

    // 4. MOVIMENTAÇÃO DO CAVALO (Loops com Variáveis Múltiplas e Condições Múltiplas)
    // Objetivo: 1 vez em L para cima à direita (2 casas para Cima, 1 casa para a Direita)
    printf("--- Movimentacao do Cavalo (Em L: Cima e Direita - Complexo) ---\n");
    
    // Inicializamos múltiplas variáveis no loop (i controla vertical, j controla horizontal)
    for (int i = 0, j = 0; i < 3 && j < 2; i++) {
        
        // Condição múltipla com continue: ignora o fluxo normal se i for zero 
        // (apenas para demonstrar o controle de fluxo exigido)
        if (i == 0 && j == 0) {
            continue; 
        }

        // Movimento vertical do Cavalo
        if (i < 3) {
            printf("Cima\n");
        }

        // Loop aninhado com condição de parada abrupta (break)
        // Quando i chega na última casa vertical (2), faz a curva para a direita
        while (i == 2) {
            printf("Direita\n");
            j++; // Incrementa a variável horizontal
            
            if (j == 1) {
                break; // Interrompe o loop do Cavalo imediatamente ao concluir o L
            }
        }
    }

    return 0;
}

// --- IMPLEMENTAÇÃO DAS FUNÇÕES RECURSIVAS ---

// Função recursiva simples para a Torre
void moverTorreRecursivo(int passos) {
    // Caso base: se não houver mais passos, encerra a função
    if (passos <= 0) {
        return;
    }
    printf("Direita\n");
    // Chamada recursiva passando o número de passos restante
    moverTorreRecursivo(passos - 1);
}

// Função recursiva simples para a Rainha
void moverRainhaRecursivo(int passos) {
    // Caso base
    if (passos <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainhaRecursivo(passos - 1);
}

// Função do Bispo que simula o comportamento de loops aninhados através de recursão bi-dimensional
void moverBispoRecursivoAninhado(int passosVerticais, int passosHorizontais) {
    // Caso base principal: quando todas as linhas diagonais forem processadas
    if (passosVerticais <= 0) {
        return;
    }

    // "Loop interno" simulado por escopo: printa a primeira coordenada do passo da diagonal
    printf("Cima\n");

    // Função interna aninhada recursiva que cuida da coordenada horizontal correspondente
    void moverHorizontal(int h) {
        if (h <= 0) return;
        printf("Direita\n");
    }
    
    // Executa o movimento horizontal correspondente àquela altura da diagonal
    moverHorizontal(1); 

    // Avança para o próximo nível da diagonal (Chamada do "Loop Externo")
    moverBispoRecursivoAninhado(passosVerticais - 1, passosHorizontais - 1);
}