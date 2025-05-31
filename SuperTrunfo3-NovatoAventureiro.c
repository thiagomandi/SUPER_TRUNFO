#include<stdio.h>

int main(){
    int i,j,k, x,y;

    printf("Torre:\n");
    i=1;
    while(i<=5){
        printf("Direita\n");
        i++;
    }
    
    printf("Bispo:\n");
    j=1;
    do{
        printf("Cima,Direita\n");
        j++;
    }while(j<=5);

    printf("Rainha:\n");
    for(k=1;k<=8;k++){
        printf("Esquerda\n");
    }
    
    printf("\nCavalo:\n");
    y=1;
    for(x=1;x<=2;x++){
        printf("Baixo, ");
        while(y<x){
            printf("Esquerda");
            y++;
        }
    }
    return 0;
}