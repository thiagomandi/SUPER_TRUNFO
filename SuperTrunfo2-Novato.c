#include<stdio.h>

int main(){
    char estado1[2],estado2[2],codigo1[4],codigo2[4],cidade1[20],cidade2[20];
    int populacao1,populacao2,pontos1,pontos2;
    float area1,area2,pib1,pib2,dens1,dens2, pibpc1, pibpc2;

    
    printf("Informe a letra do Estado, de A a H, da Carta 1:\n");
    scanf("%s", estado1);
    printf("Informe a letra do Estado, de A a H, da Carta 2:\n");
    scanf("%s", estado2);

    printf("Informe o código da Carta 1, sendo a letra do estado seguido de um número de 01 a 04, com três dígitos:\n");
    scanf("%s", codigo1);
    printf("Informe o código da Carta 2, sendo a letra do estado seguido de um número de 01 a 04, com três dígitos:\n");
    scanf("%s", codigo2);

    //o nome da cidade deve ser ser inserido usando um nome simples 
    printf("Informe o nome da cidade da Carta 1:\n");
    scanf("%s",cidade1);
    printf("Informe a nome da cidade da Carta 2:\n");
    scanf("%s",cidade2);
    
    // a população deve numérica sem abreviação    
    printf("Informe a população da cidade da Carta 1:\n");
    scanf("%d", &populacao1);
    printf("Informe a população da cidade da Carta 2:\n");
    scanf("%d", &populacao2);

    // deve ser deve ser numérica sem abreviação
    printf("Informe a área da cidade da Carta 1:\n");
    scanf("%f", &area1);
    printf("Informe a área da cidade da Carta 2:\n");
    scanf("%f", &area2);

    // o pib é abreviado usando . e não , como item da abreviação
    printf("Informe a PIB da cidade da Carta 1:\n");
    scanf("%f", &pib1);
    printf("Informe a PIB da cidade da Carta 2:\n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos da cidade da Carta 1:\n");
    scanf("%d", &pontos1);
    printf("Informe o número de pontos turísticos da cidade da Carta 2:\n");
    scanf("%d", &pontos2);

    dens1=populacao1/area1;
    pibpc1=pib1/populacao1;
    dens2=populacao2/area2;
    pibpc2=pib2/populacao2;

    printf("Carta 1:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f Km²\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %d\n\n", estado1,codigo1,cidade1,populacao1,area1,pib1,pontos1);
    printf("Carta 2:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f Km²\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %d\n\n", estado2,codigo2,cidade2,populacao2,area2,pib2,pontos2);

    printf("Carta 1: \nDensidade Demográfica: %f\n PIB Per Capita: %f\n\n",dens1,pibpc1);
    printf("Carta 2: \nDensidade Demográfica: %f\n PIB Per Capita: %f\n\n",dens2,pibpc2);

    if(populacao1>populacao2){
        printf("Carta 1 - %s: %d\n", cidade1, populacao1);
        printf("Carta 2 - %s: %d\n", cidade2, populacao2);
        printf("Resultado: Carta 1 (%s) venceu!",cidade1);
    }else
        if(populacao1<populacao2){
            printf("Carta 1 - %s: %d\n", cidade1, populacao1);
            printf("Carta 2 - %s: %d\n", cidade2, populacao2);
            printf("Resultado: Carta 2 (%s) venceu!",cidade2);
        }else{
                printf("Carta 1 - %s: %d\n", cidade1, populacao1);
                printf("Carta 2 - %s: %d\n", cidade2, populacao2);
                printf("Resultado: Empatou!");
            }
    return 0;
}