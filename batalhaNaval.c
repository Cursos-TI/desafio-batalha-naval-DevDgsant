#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5

int main() {
    char tabuleiro[LINHAS][COLUNAS]; // Matriz do tabuleiro

    // Inicializa o tabuleiro com '~' (água)
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = '~';
        }
    }

    // Define posição dos navios
    int navioVerticalX = 1, navioVerticalY = 2, tamanhoVertical = 3;
    int navioHorizontalX = 3, navioHorizontalY = 0, tamanhoHorizontal = 4;

    // Posiciona o navio vertical
    printf("Navio Vertical:\n");
    for (int i = 0; i < tamanhoVertical; i++) {
        tabuleiro[navioVerticalX + i][navioVerticalY] = 'N';
        printf("(%d, %d)\n", navioVerticalX + i, navioVerticalY);
    }

    // Posiciona o navio horizontal
    printf("\nNavio Horizontal:\n");
    for (int i = 0; i < tamanhoHorizontal; i++) {
        tabuleiro[navioHorizontalX][navioHorizontalY + i] = 'N';
        printf("(%d, %d)\n", navioHorizontalX, navioHorizontalY + i);
    }

    // Exibe o tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
