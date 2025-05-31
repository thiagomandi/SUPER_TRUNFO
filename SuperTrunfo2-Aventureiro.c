#include<stdio.h>
#include<stdlib.h>

int main(){
    char pais1[10],pais2[10];
    int populacao1,populacao2,pontos1,pontos2, opcao;
    float area1,area2,pib1,pib2,dens1,dens2;
    
    printf("Informe o país da Carta 1:\n");
    scanf("%s", pais1);
    printf("Informe o país da Carta 2:\n");
    scanf("%s", pais2);

    // a população deve numérica sem abreviação    
    printf("Informe a população do país da Carta 1:\n");
    scanf("%d", &populacao1);
    printf("Informe a população do país da Carta 2:\n");
    scanf("%d", &populacao2);

    // deve ser deve ser numérica sem abreviação
    printf("Informe a área do país da Carta 1:\n");
    scanf("%f", &area1);
    printf("Informe a área do país da Carta 2:\n");
    scanf("%f", &area2);

    // o pib é abreviado usando . e não , como item da abreviação
    printf("Informe a PIB do país da Carta 1:\n");
    scanf("%f", &pib1);
    printf("Informe a PIB do país da Carta 2:\n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos do país da Carta 1:\n");
    scanf("%d", &pontos1);
    printf("Informe o número de pontos turísticos do país da Carta 2:\n");
    scanf("%d", &pontos2);

    printf("Escolha um atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            if(populacao1>populacao2){
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributo: População\n");
                printf("População do País 1: %d, População do País 2: %d ", populacao1, populacao2);
                printf("A Carta 1 venceu!");
            }else if(populacao2>populacao1){
                    printf("País 1: %s, País 2: %s\n", pais1,pais2);
                    printf("Atributo: População\n");
                    printf("População do País 1: %d, População do País 2: %d ", populacao1, populacao2);
                    printf("A Carta 2 venceu!");
            }else{
                        printf("País 1: %s, País 2: %s\n", pais1,pais2);
                        printf("Atributo: População\n");
                        printf("População do País 1: %d, População do País 2: %d ", populacao1, populacao2);
                        printf("Empate!");
                    }
        break;
        case 2:
            if(area1>area2){
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributo: Área\n");
                printf("Área do País 1: %f, Área do País 2: %f\n", area1, area2);
                printf("A Carta 1 venceu!");
            }else if(area2>area1){
                    printf("País 1: %s, País 2: %s\n", pais1,pais2);
                    printf("Atributo: Área\n");
                    printf("Área do País 1: %f, Área do País 2: %f\n", area1, area2);
                    printf("A Carta 2 venceu!");
            }else{
                        printf("País 1: %s, País 2: %s\n", pais1,pais2);
                        printf("Atributo: Área\n");
                        printf("Área do País 1: %f, Área do País 2: %f\n", area1, area2);
                        printf("Empate!");
                    }
        break;
        case 3:
            if(pib1>pib2){
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributo: PIB\n");
                printf("PIB do País 1: %f, PIB do País 2: %f\n", pib1, pib2);
                printf("A Carta 1 venceu!");
            }else if(pib2>pib1){
                    printf("País 1: %s, País 2: %s\n", pais1,pais2);
                    printf("Atributo: PIB\n");
                    printf("PIB do País 1: %f, PIB do País 2: %f\n", pib1, pib2);
                    printf("A Carta 2 venceu!");
            }else{
                        printf("País 1: %s, País 2: %s\n", pais1,pais2);
                        printf("Atributo: PIB\n");
                        printf("PIB do País 1: %f, PIB do País 2: %f\n", pib1, pib2);
                        printf("Empate!");
                      }
        break;
        case 4:
            if(pontos1>pontos2){
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributo: Pontos Turísticos\n");
                printf("Pontos turísticos do País 1: %d, Pontos turísticos do País 2: %d\n", pontos1, pontos2);
                printf("A Carta 1 venceu!");
            }else if(pontos2>pontos1){
                    printf("País 1: %s, País 2: %s\n", pais1,pais2);
                    printf("Atributo: Pontos Turísticos\n");
                printf("Pontos turísticos do País 1: %d, Pontos turísticos do País 2: %d\n", pontos1, pontos2);
                    printf("A Carta 2 venceu!");
            }else{
                        printf("País 1: %s, País 2: %s\n", pais1,pais2);
                        printf("Atributo: Pontos Turísticos\n");
                printf("Pontos turísticos do País 1: %d, Pontos turísticos do País 2: %d\n", pontos1, pontos2);
                        printf("Empate!");
                    }
        break;
        case 5:
        dens1=populacao1/area1;
        dens2=populacao2/area2;
            if(dens1<dens2){
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributo: Densidade Demográfica\n");
                printf("Densidade Demográfica do País 1: %.2f, Densidade Demográfica do País 2: %.2f\n", dens1, dens2);
                printf("A Carta 1 venceu!");
            }else if(dens1>dens2){
                    printf("País 1: %s, País 2: %s\n", pais1,pais2);
                    printf("Atributo: Densidade Demográfica\n");
                    printf("Densidade Demográfica do País 1: %.2f, Densidade Demográfica do País 2: %.2f\n", dens1, dens2);
                    printf("A Carta 2 venceu!");
            }else{
                        printf("País 1: %s, País 2: %s\n", pais1,pais2);
                        printf("Atributo: Densidade Demográfica\n");
                    printf("Densidade Demográfica do País 1: %.2f, Densidade Demográfica do País 2: %.2f\n", dens1, dens2);
                        printf("Empate!");
                    }
        break;
        default:
            printf("Opção Inválida!");
        break;
}
return 0;
}