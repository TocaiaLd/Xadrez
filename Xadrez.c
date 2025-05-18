#include <stdio.h>

int main(){
    
    //variaveis contendo os movimentos
    int movimentoRainha = 8;
    int movimentoBispo = 5;
    int movimentoTorre = 5;

    //movimentação da rainha
    printf("|---Movimento da Rainha---|\n");
    while(movimentoRainha > 0){
        printf("Esquerda\n");
        movimentoRainha--;
    }
    //movimentação da bispo
    printf("|---Movimento do Bispo---|\n");
    do{
        printf("Direita/Cima\n");
        movimentoBispo--;
    }while(movimentoBispo>0);
    //movimentação da torre
    printf("|---Movimento da Torre---|\n");
    for(movimentoTorre; movimentoTorre>0; movimentoTorre--){
        printf("Direita\n");
    }


    return 0;
}