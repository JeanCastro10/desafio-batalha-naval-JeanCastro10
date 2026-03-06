#include <stdio.h>

int main() {

char tabuleiro[10][10]; //DECLARANDO VARIAVEIS 
char navio = '3';
char agua = '0';



printf("===BATALHA NAVAL===\n");
printf("  0 1 2 3 4 5 6 7 8 9\n");

    
for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++)
    {
        tabuleiro[i][j] = agua; //TRANFORMANDO O TABOLEIRO EM ÁGUA
    }
}  
    //ADICIONANDO NAVIOS
    
    tabuleiro[9][4] = navio;
    tabuleiro[9][5] = navio; // Navio 1 - horizontal
    tabuleiro[9][6] = navio;


    tabuleiro[0][0] = navio;
    tabuleiro[1][0] = navio; // Navio 2 - vertical
    tabuleiro[2][0] = navio;

    tabuleiro[2][5] = navio;
    tabuleiro[3][6] = navio; // Navio 3 - diagonal
    tabuleiro[4][7] = navio;

    tabuleiro[7][0] = navio;
    tabuleiro[6][1] = navio; // Navio 4 - diagonal inversa
    tabuleiro[5][2] = navio;

for (int i = 0; i < 10; i++){
        printf("%d ", i);
    for (int j = 0; j < 10; j++)
    {
        printf("%c ", tabuleiro[i][j]); // MOSTRAR O TABULEIRO COMPLETO
    }
        printf("\n");
}
   
    return 0;
}