#include <stdio.h>
 int main () {
    //Estado: No Super Trunfo, o Estado deve ser representado por uma letra entre A e H
    //Código: Cada carta tem um código, que corresponde à letra do Estado seguida de um número entre 01 e 04
    //Nome da Cidade: Cada cidade deve ser identificada por seu nome
    //População: Número de habitantes da cidade escolhida
    //Área: Tamanho da cidade em quilômetros quadrados
    //PIB: Produto Interno Bruto da Cidade
    //Número de pontos turísticos: Quantidade de pontos turísticos que existem na cidade
    
    //Estado
    char estado_A,estado_B;

    //Códigos da cidade
    char codigo_carta1 [50];
    char codigo_carta2 [50];

    //Nome da Cidade
    char nome_da_cid_1 [50];
    char nome_da_cid_2 [50];

    //População
    int populacao_cid_1, populacao_cid_2;

    //Área
    float area_cid_1, area_cid_2;

    //PIB
    float pib_cid_1, pib_cid_2;

    //Número de pontos turísticos
    int num_pontos_turisticos_cid_1, num_pontos_turisticos_cid_2;

    //Densidade populacional
    float densidade;

    //PIB per capita
    float pib_per_capita;

     printf ("Olá! Seja bem vindo ao Super Trunfo\n");
     printf ("\n");

     printf ("Vamos cadastrar os dados?\n");

     printf ("Digite a letra do primeiro Estado: ");
     scanf (" %c",&estado_A);
     printf ("\n");

     printf ("Digite o código da primeira carta: ");
     scanf ("%s",codigo_carta1);
     printf ("\n");

     printf ("Digite o nome dessa cidade: ");
     scanf ("%s",nome_da_cid_1);
     printf ("\n");

     printf ("Digite a quantidade de habitantes dessa cidade: ");
     scanf ("%d",&populacao_cid_1);
     printf ("\n");

     printf ("Digite a área da cidade em km²: ");
     scanf ("%f",&area_cid_1);
     printf ("\n");

     printf ("Digite o PIB da cidade: ");
     scanf ("%f",&pib_cid_1);
     printf ("\n");

     printf ("Digite o Número de pontos turísticos dessa cidade: ");
     scanf ("%d",&num_pontos_turisticos_cid_1);
     printf ("\n");


     printf ("MUITO BEM! Agora vamos cadastrar a segunda Carta\n");

     printf ("\n");

     printf ("Digite a letra do segundo Estado: ");
     scanf (" %c",&estado_B);
     printf ("\n");

     printf ("Digite o código da segunda carta: ");
     scanf ("%s",codigo_carta2);
     printf ("\n");

     printf ("Digite o nome dessa cidade: ");
     scanf ("%s",nome_da_cid_2);
     printf ("\n");

     printf ("Digite a quantidade de habitantes dessa cidade: ");
     scanf ("%d",&populacao_cid_2);
     printf ("\n");

     printf ("Digite a área da cidade em km²: ");
     scanf ("%f",&area_cid_2);
     printf ("\n");

     printf ("Digite o PIB da cidade: ");
     scanf ("%f",&pib_cid_2);
     printf ("\n");

     printf ("Digite o Número de pontos turísticos dessa cidade: ");
     scanf ("%d",&num_pontos_turisticos_cid_2);
     printf ("\n");

     printf ("\n");

     printf ("CADASTRO CONCLUÍDO");

     printf ("\n");
     printf ("\n");

     printf ("Carta 01:\n ");
     printf ("Estado: %c",estado_A);
     printf ("\n");
     printf (" Código: %s",codigo_carta1);
     printf ("\n");
     printf (" Nome: %s",nome_da_cid_1);
     printf ("\n");
     printf (" População: %d habitantes", populacao_cid_1);
     printf ("\n");
     printf (" Área (em km²): %f km²",area_cid_1);
     printf ("\n");
     printf (" PIB: %.2f bilhões de reais",pib_cid_1);
     printf ("\n");
     printf (" Nº de pontos turísticos: %d", num_pontos_turisticos_cid_1);
     printf ("\n");
     (densidade = populacao_cid_1/area_cid_1);
     printf ("Densidade Populacional: %.2f hab./km²", densidade);
     printf ("\n");
     (pib_per_capita = pib_cid_1/populacao_cid_1);
     printf ("PIB per capita de %s: %.2f", nome_da_cid_1, pib_per_capita);

     printf ("\n");
     printf ("\n");

    printf ("Carta 02:\n ");
     printf ("Estado: %c",estado_B);
     printf ("\n");
     printf (" Código: %s",codigo_carta2);
     printf ("\n");
     printf (" Nome: %s",nome_da_cid_2);
     printf ("\n");
     printf (" População: %d habitantes", populacao_cid_2);
     printf ("\n");
     printf (" Área (em km²): %f km²",area_cid_2);
     printf ("\n");
     printf (" PIB: %f bilhões de reais",pib_cid_2);
     printf ("\n");
     printf (" Nº de pontos turísticos: %d", num_pontos_turisticos_cid_2);
     printf ("\n");
     (densidade = populacao_cid_2/area_cid_2);
     printf ("Densidade Populacional: %.2f hab./km²", densidade);
     printf ("\n");
     (pib_per_capita = pib_cid_2/populacao_cid_2);
     printf ("PIB per capita de %s: %.2f", nome_da_cid_2, pib_per_capita);
     printf ("\n");

     return 0;


 }
