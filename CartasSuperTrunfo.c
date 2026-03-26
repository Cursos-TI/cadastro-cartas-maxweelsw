#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

	char estado;
	char Codigo[10];
	char Cidade[32];
	int Populacao;
	float Area;
	float Pib;
	int turismo;
	
	char estado2;
	char Codigo2[10];
	char Cidade2[32];
	int Populacao2;
	float Area2;
	float Pib2;
	int turismo2;
  
  // Área para entrada de dados carta 01

  printf("Digite as informacoes da Carta 1\n");
	printf("Digite entre 'A' a 'H' para representar seu estado.\n");
	scanf("%c", &estado);
	
	printf("Digite o Codigo da Carta, sera a letra escolhida mais um numero de 01 a 04, ex: A01, B03:\n");
	scanf("%s", &Codigo);
	
	printf("Digite o nome da cidade:\n");
	scanf("%s" , &Cidade);

	printf("Digite o numero de habitantes da cidade:\n");
	scanf("%d" , &Populacao);
	
	printf("Digite a area da cidade em km quadrados:\n");
	scanf("%f", &Area);
	
	printf("Digite o Pib, Produto interno bruto da cidade:\n");
	scanf("%f", &Pib);
	
	printf("Digite o numero de pontos turisticos da cidade:\n");
	scanf("%d", &turismo);

  // Área para exibição dos dados da cidade

    printf("|\n");
		printf("|\n");
	
	printf("CARTA 1\n");
	
	printf("Estado: %c\n" , estado);
	printf("Codigo da Carta: %s\n" , Codigo);
	printf("Cidade: %s\n" , Cidade);
	printf("Populacao: %d\n", Populacao);
	printf("Populacao: %d\n" , Populacao);
	printf("Area: %f\n" , Area);
	printf("PIB: %f\n" , Pib);
	printf("Pontos turisticos: %d\n" , turismo);

    printf("|\n");
		printf("|\n");
	
  // Área para entrada de dados carta 02

printf("Digite as informacoes da Carta 2\n");
	printf("Digite entre 'A' a 'H' para representar seu estado.\n");
	scanf(" %c", &estado2);
	
	printf("Digite o Codigo da Carta, sera a letra escolhida mais um numero de 01 a 04, ex: A01, B03:\n");
	scanf("%s", &Codigo2);
	
	printf("Digite o nome da cidade\n");
	scanf("%s" , &Cidade2);

	printf("Digite o numero de habitantes da cidade:\n");
	scanf("%d" , &Populacao2);
	
	printf("Digite a area da cidade em km quadrados\n");
	scanf("%f", &Area2);
	
	printf("Digite o Pib, Produto interno bruto da cidade\n");
	scanf("%f", &Pib2);
	
	printf("Digite o numero de pontos turisticos da cidade\n");
	scanf("%d", &turismo2);

   // Área para exibição dos dados da cidade

		printf("|\n");
		printf("|\n");
	
	printf("CARTA 2\n");
	printf("Estado: %c\n", estado2);
	printf("Codigo da Carta: %s\n" , Codigo2);
	printf("Cidade: %s\n" , Cidade2);
	printf("Populacao: %d\n", Populacao2);
	printf("Area: %f\n" , Area2);
	printf("PIB: %f\n" , Pib2);
	printf("Pontos turisticos: %d\n" , turismo2);


return 0;
} 
