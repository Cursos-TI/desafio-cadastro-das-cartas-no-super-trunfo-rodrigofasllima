#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
float calcularDiv(float, float);

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
        char    
            estado,
            codigo[4],
            nome[50];
        int
            populacao,
            nPontosTuristicos;
        float
            area,
            pib;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    


        
        printf("\n\n\n"); // Pula linhas para iniciar o cadastro

        printf("Digite letra do Estado da cidade:\t");
        scanf("%c", &estado);
        printf("Digite o codigo da cidade:\t\t");
        scanf("%s", &codigo);
        getchar();
        printf("Digite o neme da cidade:\t\t");
        scanf("%50[^\n]s", &nome);
        printf("Digite a População da cidade:\t\t");
        scanf("%i", &populacao);
        printf("Digite a are da cidade:\t\t\t");
        scanf("%f", &area);
        printf("Digite o PIB da cidade:\t\t\t");
        scanf("%f", &pib);
        printf("Digite o Pontos Turisticos da cidade:\t");
        scanf("%i", &nPontosTuristicos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

  
        
        printf("\n\n");      
        printf("\nEstado:\t\t\t%50c\n", estado);
        printf("Codigo:\t\t\t%50s\n", codigo);
        printf("Cidade:\t\t\t%50s\n", nome);
        printf("População:\t\t%50i\n", populacao);
        printf("Are em Km²:\t\t%50.2f\n", area);
        printf("Dencidade Populacional:\t%50.2f\n", calcularDiv(populacao, area));
        printf("PIB em Bilhões R$:\t%50.2f\n", pib);
        printf("PIB per capita R$:\t%50.2f\n", calcularDiv(pib * 1000000000, (float)populacao));
        printf("Ponto Turistico:\t%50i\n\n\n", nPontosTuristicos);
    
    return 0;
}

float calcularDiv(float dividendo, float divisor) {

    return dividendo / divisor;
}