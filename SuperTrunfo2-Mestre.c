#include<stdio.h>
#include<stdlib.h>

int main(){
    char pais1[10],pais2[10];
    int populacao1,populacao2,pontos1,pontos2, opcao1,opcao2, resultado;
    float area1,area2,pib1,pib2,dens1,dens2, somaatr1, somaatr2;
    
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

    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção 1: ");
    scanf("%d", &opcao1);
    
    switch(opcao1){
    case 1:
        printf("Escolha o segundo atributo para comparação:\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("Opção 2: ");
        scanf("%d", &opcao2);
        if (opcao1==opcao2)
            printf("Opção inválida: Os atributos não podem ser iguais!");
        else{
           switch(opcao2){
            case 2:
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributos: População e Área\n");
                printf("População da Carta1: %d\nPopulação da Carta1: %d\nÁrea da Carta 1: %f\nÁrea da Carta 2: %f\n", populacao1, populacao2,area1,area2);
                somaatr1=populacao1+area1;
                somaatr2=populacao2+area2;
                printf("A soma dos atributos para cada carta é:\nCarta 1: %f\nCarta 2: %f\n", somaatr1,somaatr2);
                resultado = somaatr1>somaatr2? 1 : 0;
                if(resultado ==1)
                printf("A Carta 1 venceu!");
                    else if(resultado ==0)
                        printf("A Carta 2 venceu");
                            else 
                                printf("Empate!");
            break;
            case 3:
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributos: População e PIB\n");
                printf("População da Carta1: %d\nPopulação da Carta1: %d\nPIB da Carta 1: %f\nPIB da Carta 2: %f\n", populacao1, populacao2,pib1,pib2);
                somaatr1=populacao1+pib1;
                somaatr2=populacao2+pib2;
                printf("A soma dos atributos para cada carta é:\nCarta 1: %f\nCarta 2: %f\n", somaatr1,somaatr2);
                resultado = somaatr1>somaatr2? 1 : 0;
                if(resultado ==1)
                printf("A Carta 1 venceu!");
                    else if (resultado ==0)
                        printf("A Carta 2 venceu");
                            else 
                                printf("Empate!");
            break;
            case 4:
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributos: População e Pontos Turísticos\n");
                printf("População da Carta1: %d\nPopulação da Carta1: %d\nPontos Turísticos da Carta 1: %d\nPontos Turísticos da Carta 2: %d\n", populacao1, populacao2,pontos1,pontos2);
                somaatr1=populacao1+pontos1;
                somaatr2=populacao2+pontos2;
                printf("A soma dos atributos para cada carta é:\nCarta 1: %f\nCarta 2: %f\n", somaatr1,somaatr2);
                resultado = somaatr1>somaatr2? 1 : 0;
                if(resultado ==1)
                    printf("A Carta 1 venceu!");
                        else if(resultado ==0)
                            printf("A Carta 2 venceu");
                                else 
                                    printf("Empate!");
            break;
            case 5:
                dens1=populacao1/area1;
                dens2=populacao2/area2;
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributos: População e Densidade Demográfica\n");
                printf("População da Carta1: %d\nPopulação da Carta1: %d\nDensidade Demográfica da Carta 1: %f\nDensidade Demográfica da Carta 2: %f\n", populacao1, populacao2,dens1,dens2);
                somaatr1=populacao1+dens1;
                somaatr2=populacao2+dens2;
                printf("A soma dos atributos para cada carta é:\nCarta 1: %f\nCarta 2: %f\n", somaatr1,somaatr2);
                resultado = somaatr1>somaatr2? 1 : 0;
                    if(resultado ==1)
                        printf("A Carta 1 venceu!");
                            else if(resultado ==0)
                                printf("A Carta 2 venceu");
                                    else 
                                        printf("Empate!");
            break;
            default:
                printf("Opção Inválida!");
            break;
            }
        }
    break;
    case 2:
        printf("Escolha o segundo atributo para comparação:\n");
        printf("1 - População\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("Opção 2: ");
        scanf("%d", &opcao2);
    if(opcao1==opcao2)
        printf("Opção inválida: Os atributos não podem ser iguais!");
        else{
            switch(opcao2){
            case 1:
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributos: População e Área\n");
                printf("População da Carta 1: %d\nPopulação da Carta 2: %d\nÁrea da Carta 1: %f\nÁrea da Carta 2: %f\n", populacao1, populacao2,area1,area2);
                somaatr1=populacao1+area1;
                somaatr2=populacao2+area2;
                printf("A soma dos atributos para cada carta é:\nCarta 1: %f\nCarta 2: %f\n", somaatr1,somaatr2);
                resultado = somaatr1>somaatr2? 1 : 0;
                if(resultado ==1)
                printf("A Carta 1 venceu!");
                    else if(resultado ==0)
                        printf("A Carta 2 venceu");
                            else 
                                printf("Empate!");
            break;
            case 3:
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributos: Área e PIB\n");
                printf("Área da Carta 1: %f\nÁrea da Carta 2: %f\nPIB da Carta 1: %f\nPIB da Carta 2: %f\n", area1,area2,pib1,pib2);
                somaatr1=area1+pib1;
                somaatr2=area2+pib2;
                printf("A soma dos atributos para cada carta é:\nCarta 1: %f\nCarta 2: %f\n", somaatr1,somaatr2);
                resultado = somaatr1>somaatr2? 1 : 0;
                if(resultado ==1)
                printf("A Carta 1 venceu!");
                    else if (resultado ==0)
                        printf("A Carta 2 venceu");
                            else 
                                printf("Empate!");
            break;
            case 4:
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributos: Área e Pontos Turísticos\n");
                printf("Área da Carta 1: %f\nÁrea da Carta 2: %f\nPontos Turísticos da Carta 1: %d\nPontos Turísticos da Carta 2: %d\n", area1, area2,pontos1,pontos2);
                somaatr1=area1+pontos1;
                somaatr2=area2+pontos2;
                printf("A soma dos atributos para cada carta é:\nCarta 1: %f\nCarta 2: %f\n", somaatr1,somaatr2);
                resultado = somaatr1>somaatr2? 1 : 0;
                if(resultado ==1)
                    printf("A Carta 1 venceu!");
                        else if(resultado ==0)
                            printf("A Carta 2 venceu");
                                else 
                                    printf("Empate!");
            break;
            case 5:
                dens1=populacao1/area1;
                dens2=populacao2/area2;
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributos: Área e Densidade Demográfica\n");
                printf("Área da Carta 1: %f\nÁrea da Carta 2: %f\nDensidade Demográfica da Carta 1: %f\nDensidade Demográfica da Carta 2: %f\n", area1, area2,dens1,dens2);
                somaatr1=area1+dens1;
                somaatr2=area2+dens2;
                printf("A soma dos atributos para cada carta é:\nCarta 1: %f \nCarta 2: %f\n", somaatr1,somaatr2);
                resultado = somaatr1>somaatr2? 1 : 0;
                    if(resultado ==1)
                        printf("A Carta 1 venceu!");
                            else if(resultado ==0)
                                printf("A Carta 2 venceu");
                                    else 
                                        printf("Empate!");
            break;
            default:
                printf("Opção Inválida!");
            break;
            }
        }
    break;
    case 3:
        printf("Escolha o segundo atributo para comparação:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("Opção 2: ");
        scanf("%d", &opcao2);
        if (opcao1==opcao2){
            printf("Opção inválida: Os atributos não podem ser iguais!");
        }
        else{
            switch(opcao2){
            case 1:
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributos: População e PIB\n");
                printf("População da Carta 1: %d\nPopulação da Carta 2: %d\nPIB da Carta 1: %f\nPIB da Carta 2: %f\n", populacao1, populacao2,pib1,pib2);
                somaatr1=populacao1+pib1;
                somaatr2=populacao2+pib2;
                printf("A soma dos atributos para cada carta é:\nCarta 1: %f\nCarta 2: %f\n", somaatr1,somaatr2);
                resultado = somaatr1>somaatr2? 1 : 0;
                if(resultado ==1)
                    printf("A Carta 1 venceu!");
                else if(resultado ==0)
                    printf("A Carta 2 venceu");
                    else 
                        printf("Empate!");
            break;
            case 2:
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributos: Área e PIB\n");
                printf("Área da Carta 1: %f\nÁrea da Carta 2: %f\nPIB da Carta 1: %f\nPIB da Carta 2: %f\n", area1,area2,pib1,pib2);
                somaatr1=area1+pib1;
                somaatr2=area2+pib2;
                printf("A soma dos atributos para cada carta é:\nCarta 1: %f\nCarta 2: %f\n", somaatr1,somaatr2);
                resultado = somaatr1>somaatr2? 1 : 0;
                if(resultado ==1)
                    printf("A Carta 1 venceu!");
                else if (resultado ==0)
                    printf("A Carta 2 venceu");
                        else 
                            printf("Empate!");
            break;
            case 4:
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributos: PIB e Pontos Turísticos\n");
                printf("PIB da Carta 1: %f\nPIB da Carta 2: %f\nPontos Turísticos da Carta 1: %d\nPontos Turísticos da Carta 2: %d\n", pib1, pib2,pontos1,pontos2);
                somaatr1=pib1+pontos1;
                somaatr2=pib2+pontos2;
                printf("A soma dos atributos para cada carta é:\nCarta 1: %f\nCarta 2: %f\n", somaatr1,somaatr2);
                resultado = somaatr1>somaatr2? 1 : 0;
                if(resultado ==1)
                    printf("A Carta 1 venceu!");
                else if(resultado ==0)
                    printf("A Carta 2 venceu");
                    else 
                        printf("Empate!");
            break;
            case 5:
                dens1=populacao1/area1;
                dens2=populacao2/area2;
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributos: PIB e Densidade Demográfica\n");
                printf("PIB da Carta 1: %f\nPIB da Carta 2: %f\nDensidade Demográfica da Carta 1: %f\nDensidade Demográfica da Carta 2: %f\n", pib1, pib2,dens1,dens2);
                somaatr1=pib1+dens1;
                somaatr2=pib2+dens2;
                printf("A soma dos atributos para cada carta é:\nCarta 1: %f\nCarta 2: %f\n", somaatr1,somaatr2);
                resultado = somaatr1>somaatr2? 1 : 0;
                    if(resultado ==1)
                        printf("A Carta 1 venceu!");
                        else if(resultado ==0)
                            printf("A Carta 2 venceu");
                                else 
                                    printf("Empate!");
            break;
            default:
                printf("Opção Inválida!");
        break;
        }
    }
    break;
    case 4:
        printf("Escolha o segundo atributo para comparação:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("5 - Densidade Demográfica\n");
        printf("Opção 2: ");
        scanf("%d", &opcao2);
        if (opcao1==opcao2){
            printf("Opção inválida: Os atributos não podem ser iguais!");
        }
        else{
            switch(opcao2){
            case 1:
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributos: População e Pontos Turísticos\n");
                printf("População da Carta 1: %d\nPopulação da Carta 2: %d\nPontos Turísticos da Carta 1: %d\nPontos Turísticos da Carta 2: %d\n", populacao1, populacao2,pontos1,pontos2);
                somaatr1=populacao1+pontos1;
                somaatr2=populacao2+pontos2;
                printf("A soma dos atributos para cada carta é:\nCarta 1: %f\nCarta 2: %f\n", somaatr1,somaatr2);
                resultado = somaatr1>somaatr2? 1 : 0;
                if(resultado ==1)
                    printf("A Carta 1 venceu!");
                    else if(resultado ==0)
                        printf("A Carta 2 venceu");
                            else 
                                printf("Empate!");
            break;
            case 2:
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributos: Área e Pontos Turísticos\n");
                printf("Área da Carta 1: %f\nÁrea da Carta 2: %f\nPontos Turísticos da Carta 1: %d\nPontos Turísticos da Carta 2: %d\n", area1,area2,pontos1,pontos2);
                somaatr1=area1+pontos1;
                somaatr2=area2+pontos2;
                printf("A soma dos atributos para cada carta é:\nCarta 1: %f\nCarta 2: %f\n", somaatr1,somaatr2);
                resultado = somaatr1>somaatr2? 1 : 0;
                if(resultado ==1)
                    printf("A Carta 1 venceu!");
            else if (resultado ==0)
                printf("A Carta 2 venceu");
                else 
                    printf("Empate!");
            break;
            case 3:
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributos: PIB e Pontos Turísticos\n");
                printf("PIB da Carta 1: %f\nPIB da Carta 2: %f\nPontos Turísticos da Carta 1: %d\nPontos Turísticos da Carta 2: %d\n", pib1, pib2,pontos1,pontos2);
                somaatr1=pib1+pontos1;
                somaatr2=pib2+pontos2;
                printf("A soma dos atributos para cada carta é:\nCarta 1: %f\nCarta 2: %f\n", somaatr1,somaatr2);
                resultado = somaatr1>somaatr2? 1 : 0;
                if(resultado ==1)
                    printf("A Carta 1 venceu!");
                    else if(resultado ==0)
                        printf("A Carta 2 venceu");
                            else 
                                printf("Empate!");
            break;
            case 5:
                dens1=populacao1/area1;
                dens2=populacao2/area2;
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributos: Pontos Turísticos e Densidade Demográfica\n");
                printf("Pontos Turísticos da Carta 1: %d\nPontos Turísticos da Carta 2: %d\nDensidade Demográfica da Carta 1: %f\nDensidade Demográfica da Carta 2: %f\n", pontos1, pontos2,dens1,dens2);
                somaatr1=pontos1+dens1;
                somaatr2=pontos2+dens2;
                printf("A soma dos atributos para cada carta é:\nCarta 1: %f\nCarta 2: %f\n", somaatr1,somaatr2);
                resultado = somaatr1>somaatr2? 1 : 0;
                if(resultado ==1)
                    printf("A Carta 1 venceu!");
                        else if(resultado ==0)
                            printf("A Carta 2 venceu");
                                else 
                                    printf("Empate!");
            break;
            default:
                printf("Opção Inválida!");
            break;
        }
    }
    break;
    case 5:
        dens1=populacao1/area1;
        dens2=populacao2/area2;
        printf("Escolha o segundo atributo para comparação:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("Opção 2: ");
        scanf("%d", &opcao2);
        if (opcao1==opcao2){
            printf("Opção inválida: Os atributos não podem ser iguais!");
        }
        else{
            switch(opcao2){
            case 1:
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributos: População e Densidade Demográfica\n");
                printf("População da Carta 1: %d\nPopulação da Carta 2: %d\nDensidade Demográfica da Carta 1: %f\nDensidade Demográfica da Carta 2: %f\n", populacao1, populacao2,dens1,dens2);
                somaatr1=populacao1+dens1;
                somaatr2=populacao2+dens2;
                printf("A soma dos atributos para cada carta é:\nCarta 1: %f\nCarta 2: %f\n", somaatr1,somaatr2);
                resultado = somaatr1>somaatr2? 1 : 0;
                if(resultado ==1)
                    printf("A Carta 1 venceu!");
                    else if(resultado ==0)
                        printf("A Carta 2 venceu");
                        else 
                            printf("Empate!");
            break;
            case 2:
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributos: Área e Densidade Demográfica\n");
                printf("Área da Carta 1: %f\nÁrea da Carta 2: %f\nDensidade Demográfica da Carta 1: %f\nDensidade Demográfica da Carta 2: %f\n", area1,area2,dens1,dens2);
                somaatr1=area1+dens1;
                somaatr2=area2+dens2;
                printf("A soma dos atributos para cada carta é:\nCarta 1: %f\nCarta 2: %f\n", somaatr1,somaatr2);
                resultado = somaatr1>somaatr2? 1 : 0;
                if(resultado ==1)
                    printf("A Carta 1 venceu!");
                else if (resultado ==0)
                    printf("A Carta 2 venceu");
                        else 
                            printf("Empate!");
            break;
            case 3:
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributos: PIB e Densidade Demográfica\n");
                printf("PIB da Carta 1: %f\nPIB da Carta 2: %f\nDensidade Demográfica da Carta 1: %f\nDensidade Demográfica da Carta 2: %f\n", pib1, pib2,dens1,dens2);
                somaatr1=pib1+dens1;
                somaatr2=pib2+dens2;
                printf("A soma dos atributos para cada carta é:\nCarta 1: %f\nCarta 2: %f\n", somaatr1,somaatr2);
                resultado = somaatr1>somaatr2? 1 : 0;
                if(resultado ==1)
                    printf("A Carta 1 venceu!");
                        else if(resultado ==0)
                            printf("A Carta 2 venceu");
                                else 
                                    printf("Empate!");    
            break;
            case 4:
                printf("País 1: %s, País 2: %s\n", pais1,pais2);
                printf("Atributos: Densidade Demográficaa e Pontos Turísticos\n");
                printf("Densidade Demográfica da Carta 1: %f\nDensidade Demográfica da Carta 2: %f\nPontos Turísticos da Carta 1: %d\nPontos Turísticos da Carta 2: %d\n", dens1, dens2,pontos1,pontos2);
                somaatr1=dens1+pontos1;
                somaatr2=dens2+pontos2;
                printf("A soma dos atributos para cada carta é:\nCarta 1: %f\nCarta 2: %f\n", somaatr1,somaatr2);
                resultado = somaatr1>somaatr2? 1 : 0;
                if(resultado ==1)
                    printf("A Carta 1 venceu!");
                        else if(resultado ==0)
                            printf("A Carta 2 venceu");
                            else 
                                printf("Empate!");
            break;
            default:
                printf("Opção Inválida!");
            break;
            }
        }
    }
    return 0;
}