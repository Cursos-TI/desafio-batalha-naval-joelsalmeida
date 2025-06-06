#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

void renderBoard(int board[10][10]) {
    for (int horizontalIndex = 0; horizontalIndex < 10; horizontalIndex++) {
        for (int verticalIndex = 0; verticalIndex < 10; verticalIndex++) {
            printf("%d  ", board[horizontalIndex][verticalIndex]);
        }
        printf("\n");
    }
    printf("\n\n");
}

void fillBoard(int board[10][10]) {
    for (int horizontalIndex = 0; horizontalIndex < 10; horizontalIndex++) {
        for (int verticalIndex = 0; verticalIndex < 10; verticalIndex++) {
            board[horizontalIndex][verticalIndex] = 0;
        }
    }
}
const int createVertically = 1;

void createShip(int board[10][10], const int shipStartX, const int shipStartY, const int createVertically) {
    const int shipSize = 3;

    if (createVertically) {
        for (int verticalIndex = shipStartY; verticalIndex < shipStartY + shipSize; verticalIndex++) {
            board[verticalIndex][shipStartX] = 3;
        }
    } else {
        for (int horizontalIndex = shipStartX; horizontalIndex < shipStartX + shipSize; horizontalIndex++) {
            board[shipStartY][horizontalIndex] = 3;
        }
    }
}

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    int board[10][10];

    fillBoard(board);
    renderBoard(board);

    createShip(board, 0, 0, 0);
    renderBoard(board);

    createShip(board, 9, 7, 1);
    renderBoard(board);

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
