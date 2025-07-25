#include <stdio.h>
int main (){
    int torrei=1, bispoi=1, rainhai=1;

    printf("\n");
    printf("TORRE MOVIMENTA-SE\n");
    for (torrei; torrei <= 5; torrei++){
        printf("direita\n");
    }
    

    printf("\n");
    printf("BISPO MOVIMENTA-SE\n");
    while (bispoi <= 5){
        printf("Direita, cima\n");
        bispoi++;
    }


    printf("\n");
    printf("RAINHA MOVIMENTA-SE\n");
    do {
        printf("Esquerda\n");
        rainhai++;
    } while (rainhai <= 8);
}