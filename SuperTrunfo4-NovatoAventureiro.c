#include <stdio.h>

int main(){
  
  int Tabuleiro[10][10]={0};
  int Navio1[3]={3,3,3};  
  int Navio2[3]={3,3,3}; 
  int Navio3[3]={3,3,3};
  int Navio4[3]={3,3,3};

  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      for(int i=0;i<3;i++){
        Tabuleiro[i+3][3]=Navio1[i]; 
      }
    }
  }
  
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      for(int i=0;i<3;i++){
        if (i>=0&&i<10&&j>=0&&j<10&&Tabuleiro[i][j]==0) {
          Tabuleiro[7][i+3]=Navio2[i];
        }
      }
    }
  }

  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      for(int i=0;i<3;i++){
        if(i>=0&&i<10&&j>=0&&j<10&&Tabuleiro[i][j]==0){
          Tabuleiro[i+2][7-i]=Navio4[i];
        }
      }
    }
  }

  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      for(int i=0;i<3;i++){
        if (i>=0&&i<10&&j>=0&&j<10&&Tabuleiro[i][j]==0){
          if(i==j){
            Tabuleiro[i+6][i+6]=Navio3[i];  
          }
        }
      }
    }
  } 

  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      printf("%d ",Tabuleiro[i][j]);
    }
    printf("\n");
  }
  return 0;
}