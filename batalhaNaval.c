#include <stdio.h>

int main()
{
    // JOGO BATALHA NAVAL, ONDE 0 É REPRESENTADO POR AGUA E 3 REPRESENTANDO NAVIO
    // TABULEIRO MATRIZ 10X10
    int tabuleiro [10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0; 
        }
    }
        
    // REPRESENTAÇÃO DE COLUNAS "A" ATÉ "J"
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int i, j, k;
    
    //LOOP DE COLUNAS (J)
    for(i=0;i<10;i++){
        printf(" %c", colunas[i]);
    }
    printf("\n");
    
    for (j = 2; j <= 4; j++) {
        tabuleiro[3][j] = 3; //NAVIO HORIZONTAL REPRESENTADO POR 3
    }
    
    
    for (k = 1; k <= 3; k++) {
        tabuleiro[k][8] = 3; //NAVIO VERTICAL REPRESENTADO POR 3 
    }
    
    
   
    for (i=0;i<10;i++){ //LOOP DE LINHAS (I)
         printf("%d ", i + 1); 
        for(j=0; j<10; j++){
            printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
    }
    
    
    
    
    
    return 0;
}