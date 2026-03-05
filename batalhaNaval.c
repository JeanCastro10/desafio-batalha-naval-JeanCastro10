#include <stdio.h>

int main() {

char tabuleiro[10][10]; //DECLARANDO VARIAVEIS 
char navio = '3';
char agua = '0';
int linha[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};


printf("===BATALHA NAVAL===\n");
printf("  A B C D E F G H I J\n");

    
for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++)
    {
        tabuleiro[i][j] = agua; //TRANFORMANDO O TABOLEIRO EM ÁGUA
    }
}  
    //ADICIONANDO NAVIOS
    
    tabuleiro[9][4] = navio;
    tabuleiro[9][5] = navio; // NAVIO 1
    tabuleiro[9][6] = navio;


    tabuleiro[0][0] = navio;
    tabuleiro[0][1] = navio; // NAVIO 2
    tabuleiro[0][2] = navio;

    tabuleiro[2][5] = navio;
    tabuleiro[3][5] = navio; // NAVIO 3
    tabuleiro[4][5] = navio;

for (int i = 0; i < 10; i++){
        printf("%d ", linha[i]);
    for (int j = 0; j < 10; j++)
    {
        printf("%c ", tabuleiro[i][j]); // MOSTRAR O TABULEIRO COMPLETO
    }
        printf("\n");
}

    return 0;
}