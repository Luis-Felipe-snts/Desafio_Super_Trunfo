#include <stdio.h>
#include <string.h>

    int main () {
      
        //Opção escolhida pelo usuário no Menu do Jogo
        int opcao;
      
        //Código da Carta
        char codigo1 [50], codigo2 [50];

        //Nome do país
        char pais_1 [50], pais_2 [50];

        //População
        unsigned long int populacao_1, populacao_2;

        //Área
        float area_1, area_2;

        //PIB
        float pib_1, pib_2;

        //Número de pontos turísticos
        int num_pontos_turisticos_1, num_pontos_turisticos_2;

        //Densidade Populacional
        float densidade_pop_1, densidade_pop_2;

        //PIB per capita
        float pib_per_capita_1, pib_per_capita_2;

        printf ("\n");
        printf ("Olá! Seja bem vindo ao Super Trunfo! Escolha a opção desejada: \n");
        printf ("\n");
        printf ("1. Iniciar Jogo\n");
        printf ("2. Regras do Super Trunfo\n");
        printf ("3. Sair do Jogo\n");
        scanf ("%d", &opcao);

        switch (opcao) {
          case 1:
            printf ("MUITO BEM! Vamos cadastrar as cartas?\n");
            printf ("\n");

            printf ("Digite o código da primeira carta: ");
            scanf ("%s",codigo1);
            printf ("\n");
            
            printf ("Digite o nome do País: \n");
            fgets (pais_1, 50, stdin);
            
            // Remove o '\n' inserido pelo fgets
            pais_1 [strcspn(pais_1, "\n")] = 0;
            printf ("\n");
    
            printf ("Digite a quantidade de habitantes desse País: ");
            scanf ("%lu",&populacao_1);
            printf ("\n");
    
            printf ("Digite a área do país em km²: ");
            scanf ("%f",&area_1);
            printf ("\n");
    
            printf ("Digite o PIB do País: ");
            scanf ("%f",&pib_1);
            printf ("\n");
    
            printf ("Digite o Número de pontos turísticos do País: ");
            scanf ("%d",&num_pontos_turisticos_1);
            printf ("\n");
    
    
            printf ("MUITO BEM! Agora vamos cadastrar a segunda Carta\n");
    
            printf ("\n");
    
            printf ("Digite o código da segunda carta: ");
            scanf ("%s",codigo2);
            printf ("\n");
    
            printf ("Digite o nome do País: ");
            scanf ("%s",pais_2);
            printf ("\n");
    
            printf ("Digite a quantidade de habitantes desse País: ");
            scanf ("%lu",&populacao_2);
            printf ("\n");
    
            printf ("Digite a área do país em km²: ");
            scanf ("%f",&area_2);
            printf ("\n");
    
            printf ("Digite o PIB desse País: ");
            scanf ("%f",&pib_2);
            printf ("\n");
    
            printf ("Digite o Número de pontos turísticos desse País: ");
            scanf ("%d",&num_pontos_turisticos_2);
            printf ("\n");
    
            printf ("\n");
    
            printf ("CADASTRO CONCLUÍDO\n");
            printf ("\n");
    
            (densidade_pop_1 = populacao_1/area_1);
            (densidade_pop_2 = populacao_2/area_2);
            (pib_per_capita_1 = pib_1/populacao_1);
            (pib_per_capita_2 = pib_2/populacao_2);
    
            printf (" COMPARAÇÃO >>> Escolha o atributo de comparação entre as cartas: \n");
            printf ("\n");
            printf (" 1. Nome", nome);
            if (populacao_1 > populacao_2) {
                printf ("\n");
                printf ("\n");
                printf (" %s (%s) é a cidade mais populosa\n", cidade_1, estado_1);
                printf ("\n");
                printf (" Carta 01 - %s: %d habitantes", cidade_1, populacao_1);
                printf ("\n");
                printf (" Carta 02 - %s: %d habitantes", cidade_2, populacao_2);
                printf ("\n");
                printf (" CARTA 01 (%s) venceu!", codigo1);
    
            } else {
                printf ("\n");
                printf ("\n");
                printf (" %s (%s) é a cidade mais populosa\n", cidade_2, estado_2);
                printf ("\n");
                printf (" Carta 01 - %s: %d habitantes", cidade_1, populacao_1);
                printf ("\n");
                printf (" Carta 02 - %s: %d habitantes", cidade_2, populacao_2);
                printf ("\n");
                printf (" CARTA 02 (%s) venceu!", codigo2);
                printf ("\n");
            }
           
        }

       

        return 0;
    }
