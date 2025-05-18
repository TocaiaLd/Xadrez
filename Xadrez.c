#include <stdio.h>

//função Rainha
void Rainha(int n) {
    if(n > 0){
        printf("Esquerda\n");
        Rainha(n-1);
    }
}

//função Bispo
void Bispo(int x, int y){
    while(y>0){
        printf("Cima/");
        while(x>0){
            printf("Direita\n");
            break;
        }
        Bispo(x-1, y-1);
        break;
    }    
}

//função Torre
void Torre(int n){
    if(n>0){
        printf("Direita\n");
        Torre(n-1);
    }    
}

//função Cavalo
void Cavalo(int n){
    if(n==0){
        printf("não houve movimento");
        return;
    }
    while(n>0){
        for(int i = 0; i < 2; i++){
            printf("Cima ");
        }
        for(int j = 0; j < 1; j++){
            printf("Direita");
        }
        n--;
    }
}

//funcao principal
int main(){
    //variaveis contendo os movimentos
    int movimentoRainha = 8;
    int movimentoBispoX = 5;
    int movimentoBispoY;
    movimentoBispoY = movimentoBispoX; 
    int movimentoTorre = 5;
    int movimentoCavalo = 1;

    //movimentação da rainha
    printf("|---Movimento da Rainha---|\n");
    Rainha(movimentoRainha);

    //movimentação da bispo
    printf("|---Movimento do Bispo---|\n");
    Bispo(movimentoBispoX, movimentoBispoY);

    //movimentação da torre
    printf("|---Movimento da Torre---|\n");
    Torre(movimentoTorre);

    //movimentação do cavalo
    printf("|---Movimento do Cavalo---|\n");
    Cavalo(movimentoCavalo);

    return 0;
}