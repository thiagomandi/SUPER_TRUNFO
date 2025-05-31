#include<stdio.h>

void recursivot(int torre){
    if (torre>0){
        printf("Direita\n");
        recursivot(torre-1);
   }
}

void recursivob(int bispo){
    int c,d;
    if (bispo>0){
        for(c=1;c<=1;c++){
        printf("Cima, ");
            for(d=1;d<=1;d++){
                printf("Direita\n");
            }
        }
        recursivob(bispo-1);
    }
}

void recursivor(int rainha){
    if (rainha>0){
        printf("Esquerda\n");

        recursivor(rainha-1);
    }
}

int main(){
    int i=5,j=5,k=8, x,y;
    
    printf("Torre:\n");
    recursivot(i);
        
    printf("Bispo:\n");
    recursivob(j);
    
    printf("Rainha:\n");
    recursivor(k);
    
    printf("Cavalo:\n");
    for(i=1,j=1;i<=3 && j<=i;i++,j++){
        printf("Cima, ");
        if(i==2){
            printf("Direita\n");
            break;
        }
    }
    return 0;
}