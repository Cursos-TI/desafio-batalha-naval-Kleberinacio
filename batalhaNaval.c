#include <stdio.h>

int main(){
    char colunas[12] = {' ', ' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int batnav [10][10];
    char *linhas[10] = {" 1- ", " 2- ", " 3- ", " 4- ", " 5- ", " 6- ", " 7- ", " 8- ", " 9- ", "10- "};

    //Implementação das letras das colunas;
    for(int j = 0; j < 12; j++){
        printf("%c ", colunas[j]);
    }
    printf("\n");

    
    //Implementação do campo batalha naval
    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            //Implementação dos números das linhas;
            if(i >=0 && i <= 10 && j == 0){
                printf("%s", linhas[i]);
            }   

            //Implementação do Navio 1;
            if(i == 3 && j >= 3 && j <= 5){
                printf("3 ");
                }
                if(i == 3 && j >= 3 && j <= 5){
                    continue;
                    }

                    //Implementação do Navio 2;
                    if(i >= 7 && i <= 9 && j == 2){
                        printf("3 ");
                    }
                        if(i >= 7 && i <= 9 && j == 2){
                            continue;
                            }
                        

                printf("0 ");
        }
        printf("\n");
    }

    return 0;

}

