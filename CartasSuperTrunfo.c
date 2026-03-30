#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
        char Estado1, Estado2;
        char Codigo1[5], Codigo2[5];
        char Cidade1[30], Cidade2[30];
        int Populacao1, Populacao2;
        double Area1, Area2; 
        float PIB1, PIB2;
        int Pt1, Pt2;

  // Área para entrada de dados
    printf("Digite o seu Estado: ");
     scanf(" %c", &Estado1);
    printf("Digite o seu código: ");
     scanf("%s", &Codigo1);
    printf("Digite a sua cidade: ");
     scanf("%s", &Cidade1);
    printf("Digite a sua população: ");
     scanf("%d", &Populacao1);
    printf("Digite a área: ");
     scanf("%lf", &Area1);
    printf("Digite o PIB: ");
     scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos: ");
     scanf("%d", &Pt1);

    printf("\n \nDigite o seu Estado: ");
     scanf(" %c", &Estado2);
    printf("Digite o seu código: ");
     scanf("%s", &Codigo2);
    printf("Digite a sua cidade: ");
     scanf("%s", &Cidade2);
    printf("Digite a sua população: ");
     scanf("%d", &Populacao2);
    printf("Digite a área: ");
     scanf("%lf", &Area2);
    printf("Digite o PIB: ");
     scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos: ");
     scanf("%d", &Pt2);
  // Área para exibição dos dados da cidade
    
    printf("\n \nCarta 1: \n");
    printf("Estado: %c \n", Estado1);
    printf("Código: %s \n", Codigo1);
    printf("Nome da Cidade: %s \n", Cidade1);
    printf("População: %d \n", Populacao1);
    printf("Área: %.3f km² \n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Números de pontos turísticos: %d ", Pt1);

    printf("\n \nCarta 2: \n");
    printf("Estado: %c \n", Estado2);
    printf("Código: %s \n", Codigo2);
    printf("Nome da Cidade: %s \n", Cidade2);
    printf("População: %d \n", Populacao2);
    printf("Área: %.3f km² \n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Números de pontos turísticos: %d ", Pt2);
return 0;
} 
