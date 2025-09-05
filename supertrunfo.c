#include <stdio.h>

int main() {
    
    // Variáveis carta 1
    char estado1;
    char codigo1[4];           
    char nomeCidade1[20];  
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;


    // Variaveis carta 2

    char estado2;
    char codigo2[4];           
    char nomeCidade2[20];  
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro da carta 1
    printf("Cadastro da carta 1\n");

    printf("Digite o estado (A - H):\n");
    scanf(" %c", &estado1);  

    printf("Digite o codigo:\n");
    scanf("%3s", codigo1);  

    printf("Digite o nome da cidade:\n");
    scanf("%19s", nomeCidade1); 

    printf("Digite a populacao:\n");
    scanf("%lu", &populacao1);

    printf("Digite a area:\n");
    scanf("%f", &area1);

    printf("Digite o pib: \n");
    scanf("%f", &pib1);

    printf("Digite o ponto turistico: \n");
    scanf("%d", &pontosTuristicos1);

    // Dados cadastrados carta 1
    printf("\nDados cadastrados\n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Cidade: %s \n", nomeCidade1);
    printf("Populacao: %lu \n", populacao1);
    printf("Area: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Pontos turisticos: %d \n", pontosTuristicos1);




    //Cadastro da carta 2

     printf("Cadastro da carta 2\n");

    printf("Digite o estado (A - H):\n");
    scanf(" %c", &estado2);  

    printf("Digite o codigo:\n");
    scanf("%3s", codigo2);   

    printf("Digite o nome da cidade:\n");
    scanf("%19s", nomeCidade2); 

    printf("Digite a populacao:\n");
    scanf("%lu", &populacao2);

    printf("Digite a area:\n");
    scanf("%f", &area2);

    printf("Digite o pib: \n");
    scanf("%f", &pib2);

    printf("Digite o ponto turistico: \n");
    scanf("%d", &pontosTuristicos2);


     // Dados cadastrados carta 2
    printf("\nDados cadastrados\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Cidade: %s \n", nomeCidade2);
    printf("Populacao: %lu \n", populacao2);
    printf("Area: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos turisticos: %d \n", pontosTuristicos2);

    //calculo da densidade populacional e Pib per Capta da carta 1

    float densidadePopulacional1, pibPercapta1;

    densidadePopulacional1 = populacao1 / area1;
     printf("a densidade populacional da carta 1 eh: %.2f\n", densidadePopulacional1);

    pibPercapta1 = pib1 / populacao1;
    printf("o Pib per Capta da carta 1 eh: %.2f\n", pibPercapta1);


     //calculo da densidade populacional e Pib per Capta da carta 2

    float densidadePopulacional2, pibPercapta2;

    densidadePopulacional2 = populacao2 / area2;
    printf("a densidade populacional da carta 2 eh: %.2f\n", densidadePopulacional2);

    pibPercapta2 = pib2 / populacao2;
    printf("o Pib per Capta da carta 2 eh: %.2f", pibPercapta2);

    //Super poder
    float superPoder1, superPoder2;


    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPercapta1 + (1.0 / densidadePopulacional1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPercapta2 + (1.0 / densidadePopulacional2);

   //Comparacao entre as cartas
    printf("\n=== Comparacao de Cartas ===\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2); 
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPercapta1 > pibPercapta2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);


    return 0;
}

