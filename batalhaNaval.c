# include <stdio.h>

int main() {
    int tabuleiro[5][5]= {0}; //tabuleiro 5x5 preenchido com zeros

    //Posicionando o navio horizontalmente
    tabuleiro[1][1] = 1;
    tabuleiro[1][2] = 1;
    tabuleiro[1][3] = 1;

    //Posicionando o navio verticalmente
    tabuleiro[3][2] = 1;
    tabuleiro[4][2] = 1;
   

    //Imprimindo o tabuleiro
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}