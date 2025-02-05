#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[20]; 
    int cidade;
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite nome do estado: \n");
    scanf("%s", &estado);

    printf("Insira o código da cidade: \n");
    scanf("%d", &cidade);

    printf("Insira total da população: \n");
    scanf("%d", &populacao);

    printf("Especifique a área: \n");
    scanf("%f", &area);

    printf("Pib: \n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos existem na cidade: \n");
    scanf("%d", &pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Estado: %s", estado);
    printf("Código da cidade: %d", cidade);
    printf("População: %d", populacao);
    printf("Área: %f", area);
    printf("Pib: %f", pib);
    printf("Pontos turisticos: %d", pontos_turisticos);


    return 0;
}
