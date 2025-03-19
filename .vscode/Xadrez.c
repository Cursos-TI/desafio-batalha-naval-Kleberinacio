#include <stdio.h>

//Função recursiva para imprimir números de "numero" até 1
//Movimento da Torre
void moverTorre(int casas){
    if (casas > 0){

        printf("Direita\n");
        moverTorre(casas - 1);
        //Chama a si mesma com numero - 1
    }
}
//Movimento da Rainha
void moverRainha(int casas){
    if (casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}
//Movimento do Bispo
void moverBispo(int casas){
    if (casas > 0){
        int pulo = 5;
        if (pulo > 0){
            printf("Cima\n");
            printf("Direita\n");
            moverBispo(casas -1);
            pulo--;
        }
    } 
}
//Movimento do Cavalo
void moverCavalo(int casas){
    if (casas > 0){
        printf("Cima\n");
        moverCavalo(casas - 1);        
    } if (casas == 0){
    printf("Direita\n");
    }
}

int main(){

    printf("Movimento da Torre\n");
    moverTorre(5);
    printf("\n");

    printf("Movimento da Rainha\n");
    moverRainha(8);
    printf("\n");

    printf("Movimento do Bispo\n");
    moverBispo(5);
    printf("\n");

    printf("Movimento do Cavalo\n");
    moverCavalo(2);
    printf("\n");

    return 0;
}