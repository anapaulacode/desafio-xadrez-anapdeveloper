#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Implementação do Nível Novato

// --- Requisito: Entrada de Dados ---
// As constantes definem os valores a serem utilizados nos loops,
// facilitando a manutenção do código.
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_RAINHA 8

int main() {
    
    // --- Requisito: Saída de Dados ---
    // Exibimos os resultados de forma clara e organizada para cada peça.
    
    printf("--- SIMULAÇÃO DE MOVIMENTOS - NÍVEL NOVATO ---\n\n");

    // --- Movimentação do Bispo (usando 'for') ---
    // O Bispo se move 5 casas na diagonal superior direita.
    // Conforme a regra, simulamos a diagonal combinando os movimentos "Cima" e "Direita".
    printf("Movimento do Bispo (%d casas na diagonal superior direita):\n", MOVIMENTOS_BISPO);
    
    // A estrutura 'for' é ideal quando sabemos exatamente quantas vezes o loop precisa rodar.
    for (int i = 0; i < MOVIMENTOS_BISPO; i++) {
        printf("  Passo %d:\n", i + 1);
        printf("    Cima\n");
        printf("    Direita\n");
    }

    printf("\n---------------------------------------------------\n\n");

    // --- Movimentação da Torre (usando 'while') ---
    // A Torre se move 5 casas para a direita.
    printf("Movimento da Torre (%d casas para a direita):\n", MOVIMENTOS_TORRE);

    // A estrutura 'while' verifica a condição antes de executar o bloco de código.
    int contador_torre = 0; // Variável de controle para o loop
    while (contador_torre < MOVIMENTOS_TORRE) {
        printf("  Passo %d: Direita\n", contador_torre + 1);
        contador_torre++; // Incrementamos o contador para evitar um loop infinito.
    }

    printf("\n---------------------------------------------------\n\n");

    // --- Movimentação da Rainha (usando 'do-while') ---
    // A Rainha se move 8 casas para a esquerda.
    printf("Movimento da Rainha (%d casas para a esquerda):\n", MOVIMENTOS_RAINHA);

    // A estrutura 'do-while' executa o bloco de código pelo menos uma vez
    // e só então verifica a condição.
    int contador_rainha = 0; // Variável de controle para o loop
    do {
        printf("  Passo %d: Esquerda\n", contador_rainha + 1);
        contador_rainha++; // Incrementamos o contador.
    } while (contador_rainha < MOVIMENTOS_RAINHA);

    return 0;
}

