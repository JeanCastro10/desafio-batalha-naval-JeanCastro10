#include <stdio.h>

int main() {

char tabuleiro[10][10];
char linha = '0';
char coluna = 'A';


printf("===BATALHA NAVAL===\n");
printf("  A B C D E F G H I J\n");
for (int i = 0; i < 10; i++) {
    printf("%d ", i);
    for (int j = 0; j < 10; j++) {  
        tabuleiro[i][j] = '0'; 
        printf("%c ", tabuleiro[i][j]);
    }
    printf("\n");
}   


    return 0;
}