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
    char A,B;

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

     printf ("Olá! Seja bem vindo ao Super Trunfo\n");
     printf ("\n");

     printf ("Vamos cadastrar os dados?\n");

     printf ("Digite a letra do primeiro Estado: ");
     scanf (" %c",&A);
     printf ("\n");

     printf ("Digite o código da primeira carta: ");
     scanf ("%s",codigo_carta1);
     printf ("\n");

     printf ("Digite o nome da primeira cidade: ");
     scanf ("%s",nome_da_cid_1);
     printf ("\n");

     printf ("Digite a quantidade de habitantes da primeira cidade: ");
     scanf ("%d",&populacao_cid_1);
     printf ("\n");

     printf ("Digite a área da primeira cidade em km²: ");
     scanf ("%f",&area_cid_1);
     printf ("\n");

     printf ("Digite o PIB da primeira cidade: ");
     scanf ("%f",&pib_cid_1);
     printf ("\n");

     printf ("Digite o Número de pontos turísticos da primeira cidade: ");
     scanf ("%d",&num_pontos_turisticos_cid_1);
     printf ("\n");


     printf ("MUITO BEM! Agora vamos cadastrar a segunda Carta");

     printf ("\n");

     printf ("Digite a letra do segundo Estado: ");

     scanf (" %c",&B);
     printf ("\n");

     printf ("Digite o código da segunda carta: ");
     scanf ("%s",codigo_carta2);
     printf ("\n");

     printf ("Digite o nome da segunda cidade: ");
     scanf ("%s",nome_da_cid_2);
     printf ("\n");

     printf ("Digite a quantidade de habitantes da segunda cidade: ");
     scanf ("%d",&populacao_cid_2);
     printf ("\n");

     printf ("Digite a área da segunda cidade em km²: ");
     scanf ("%f",&area_cid_2);
     printf ("\n");

     printf ("Digite o PIB da segunda cidade: ");
     scanf ("%f",&pib_cid_2);
     printf ("\n");

     printf ("Digite o Número de pontos turísticos da segunda cidade: ");
     scanf ("%d",&num_pontos_turisticos_cid_2);

     printf ("\n");

     printf ("CADASTRO CONCLUÍDO");

     printf ("\n");

     printf ("Carta 01:\n ");
     printf ("Estado: %c\n",A);
     printf ("Código: %s\n",codigo_carta1);
     printf ("Nome: %s\n",nome_da_cid_1);
     printf ("População: %d\n habitantes", populacao_cid_1);
     printf ("Área (em km²): %.2f\n km²",area_cid_1);
     printf ("PIB: %.2f\n bilhões de reais",pib_cid_1);
     printf ("Nº de pontos turísticos: %d\n", num_pontos_turisticos_cid_1);

     printf ("\n");

     printf ("Carta 02:\n ");
     printf ("Estado: %c\n",B);
     printf ("Código: %s\n",codigo_carta2);
     printf ("Nome: %s\n",nome_da_cid_2);
     printf ("População: %d\n habitantes", populacao_cid_2);
     printf ("Área (em km²): %.2f\n km²",area_cid_2);
     printf ("PIB: %.2f\n bilhões de reais",pib_cid_2);
     printf ("Nº de pontos turísticos: %d\n", num_pontos_turisticos_cid_2);

     return 0;


 }
