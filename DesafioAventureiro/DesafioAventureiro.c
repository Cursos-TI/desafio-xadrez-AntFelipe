#include <stdio.h>
int main (){
    int torrei=1, bispoi=1, rainhai=1, cavaloi=1;
    const int movCav=1, movTorre=5, movBispo=5, movRainha=8;
    printf("\n");
    printf("TORRE MOVIMENTA-SE\n");
    for (torrei; torrei <= movTorre; torrei++){
        printf("direita\n");
    }
    

    printf("\n");
    printf("BISPO MOVIMENTA-SE\n");
    while (bispoi <= movBispo){
        printf("Direita, cima\n");
        bispoi++;
    }


    printf("\n");
    printf("RAINHA MOVIMENTA-SE\n");
    do {
        printf("Esquerda\n");
        rainhai++;
    } while (rainhai <= movRainha);

    printf("\n");
    printf("CAVALO MOVIMENTA-SE\n");
    for (cavaloi; cavaloi <= movCav; cavaloi++){
      int mov=1;
        while (mov <= 2){
            printf("Baixo\n");
            mov++;
        }
        printf("Esquerda\n");
    }
}
/*
do {
        printf("Cima, Cima, Direita\n");
        rainhai++;
    } while (rainhai <= 8);

*/