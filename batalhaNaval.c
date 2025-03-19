#include <stdio.h>
 
 void aplicarHabilidade(int batnav[10][10], int origemX, int origemY, int poder) {
     int matrizHab[5][5] = {0};
     
     // Código das habilidades
     if (poder == 1) { // Cone
         matrizHab[0][2] = 1;
         matrizHab[1][1] = matrizHab[1][2] = matrizHab[1][3] = 1;
         for (int i = 0; i < 5; i++) matrizHab[2][i] = 1;
     } else if (poder == 2) { // Cruz
         for (int i = 0; i < 5; i++) matrizHab[2][i] = matrizHab[i][2] = 1;
     } else if (poder == 3) { // Octaedro
         matrizHab[0][2] = matrizHab[4][2] = 1;
         matrizHab[1][1] = matrizHab[1][3] = matrizHab[3][1] = matrizHab[3][3] = 1;
         matrizHab[1][2] = matrizHab[3][2] = 1;
         for (int i = 0; i < 5; i++) matrizHab[2][i] = 1;
     }
     
     // Aplicação das habilidades
     for (int i = 0; i < 5; i++) {
         for (int j = 0; j < 5; j++) {
             int x = origemX + i - 2;
             int y = origemY + j - 2;
             if (x >= 0 && x < 10 && y >= 0 && y < 10 && matrizHab[i][j] == 1) {
                batnav[x][y] = 5;
             }
         }
     }
 }
 
 int main() {
    char colunas[12] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
     int batnav[10][10] = {0};

     for(int j = 0; j < 12; j++){
        printf("%c ", colunas[j]);
    }
    printf("\n");
     
     // Posicionamento dos navios
     int posNavios[4][2] = {{0, 5}, {6, 2}, {4, 4}, {7, 5}};
     for (int i = 0; i < 3; i++) {
         batnav[posNavios[0][0]][posNavios[0][1] + i] = 3; // Navio Horizontal
         batnav[posNavios[1][0] + i][posNavios[1][1]] = 3; // Navio Vertical
         batnav[posNavios[2][0] + i][posNavios[2][1] + i] = 3; // Navio Diagonal 1
         batnav[posNavios[3][0] + i][posNavios[3][1] - i] = 3; // Navio Diagonal 2
     }
     
     // Aplicação das habilidades
     aplicarHabilidade(batnav, 3, 3, 1); // Cone
     aplicarHabilidade(batnav, 6, 6, 2); // Cruz
     aplicarHabilidade(batnav, 2, 7, 3); // Octaedro
     
     // Exibir tabuleiro
     for (int i = 0; i < 10; i++) {
         for (int j = 0; j < 10; j++) {
             printf("%d ", batnav[i][j]);
         }
         printf("\n");
     }
 
     return 0;
 }