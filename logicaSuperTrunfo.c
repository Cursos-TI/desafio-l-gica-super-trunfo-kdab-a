#include <stdio.h>

int main() {
    //A seguir, a declaração das variáveis usadas.
    char estado1, codigo1[4], cidade1[30];
    char estado2, codigo2[4], cidade2[30];
    int pontos1, pontos2, opcao;
    unsigned long int populacao1, populacao2;
    float area1, pib1, denspop1, pibpc1, superpoder1;
    float area2, pib2, denspop2, pibpc2, superpoder2;

    //A seguir, a requisição ao usuário para que insira as informações necessárias para definir a primeira carta.
    printf("A seguir, insira os dados da primeira carta:\nDigite uma letra de A a H, representando um dos oito estados:\n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta, contendo a letra do estado seguida de um número de 01 a 04:\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);
    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade:\n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontos1);
    getchar();

    //A seguir, o cálculo da densidade populacional, do PIB per Capita e do Super Poder para a Carta 1.
    denspop1 = populacao1 / area1;
    pibpc1 = pib1 / populacao1;
    superpoder1 = (float)(pontos1 + pib1 + pibpc1 + area1 + populacao1 + (area1 / populacao1));

    //A seguir, a exibição da primeira Carta.
    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1, denspop1, pibpc1, superpoder1);

    //A seguir, a requisição ao usuário para que insira as informações necessárias para definir a segunda carta.
    printf("\nA seguir, insira os dados da segunda carta:\nDigite uma letra de A a H, representando um dos oito estados:\n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta, contendo a letra do estado seguida de um número de 01 a 04:\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);
    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade:\n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontos2);

    //A seguir, o cálculo da densidade populacional, do PIB per Capita e do Super Poder para a Carta 2.
    denspop2 = populacao2 / area2;
    pibpc2 = pib2 / populacao2;
    superpoder2 = (float)(pontos2 + pib2 + pibpc2 + area2 + populacao2 + (area2 / populacao2));

    //A seguir, a exibição da segunda Carta.
    printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2, denspop2, pibpc2, superpoder2);

    //A seguir, a comparação entre os dados das duas cartas.
    printf("\nEscolha um dos dados para comparação entre as cartas:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Número de Pontos Turísticos\n5. Densidade Populacional\n6. PIB per Capita\n7. Super Poder\n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            printf("\nA população de %s é %lu. A população de %s é %lu.\n", cidade1, populacao1, cidade2, populacao2);
            if(populacao1 > populacao2){
                printf("Carta 1 venceu!\n");
            }else if(populacao1 < populacao2){
                printf("Carta 2 venceu!\n");
            }else{
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("\nA área de %s é %.2f. A área de %s é %.2f.\n", cidade1, area1, cidade2, area2);
            if(area1 > area2){
                printf("Carta 1 venceu!\n");
            }else if(area1 < area2){
                printf("Carta 2 venceu!\n");
            }else{
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("\nO PIB de %s é %.2f. O PIB de %s é %.2f.\n", cidade1, pib1, cidade2, pib2);
            if(pib1 > pib2){
                printf("Carta 1 venceu!\n");
            }else if(pib1 < pib2){
                printf("Carta 2 venceu!\n");
            }else{
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("\nO número de pontos turísticos de %s é %d. O número de pontos turísticos de %s é %d.\n", cidade1, pontos1, cidade2, pontos2);
            if(pontos1 > pontos2){
                printf("Carta 1 venceu!\n");
            }else if(pontos1 < pontos2){
                printf("Carta 2 venceu!\n");
            }else{
                printf("Empate!\n");
            }
            break;
        case 5:
            printf("\nA densidade populacional de %s é %.2f. A densidade populacional de %s é %.2f.\n", cidade1, denspop1, cidade2, denspop2);
            if(denspop2 > denspop1){
                printf("Carta 1 venceu!\n");
            }else if(denspop2 < denspop1){
                printf("Carta 2 venceu!\n");
            }else{
                printf("Empate!\n");
            }
            break;
        case 6:
            printf("\nO PIB per Capita de %s é %.2f. O PIB per Capita de %s é %.2f.\n", cidade1, pibpc1, cidade2, pibpc2);
            if(pibpc1 > pibpc2){
                printf("Carta 1 venceu!\n");
            }else if(pibpc1 < pibpc2){
                printf("Carta 2 venceu!\n");
            }else{
                printf("Empate!\n");
            }
            break;
        case 7:
            printf("\nO Super Poder de %s é %.2f. O Super Poder de %s é %.2f.\n", cidade1, superpoder1, cidade2, superpoder2);
            if(superpoder1 > superpoder2){
                printf("Carta 1 venceu!\n");
            }else if(superpoder1 < superpoder2){
                printf("Carta 2 venceu!\n");
            }else{
                printf("Empate!\n");
            }
            break;
        default:
            printf("\nOpção inválida.\n");
    }

    return 0;
}