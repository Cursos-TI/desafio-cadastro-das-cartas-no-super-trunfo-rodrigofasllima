#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


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
        printf("\nEstado:\t\t\t%20c\n", estado);
        printf("Codigo:\t\t\t%20s\n", codigo);
        printf("Cidade:\t\t\t%20s\n", nome);
        printf("População:\t\t%20.3i\n", populacao);
        printf("Are em Km²:\t\t%20.3f\n", area);
        printf("PIB em Bilhões R$:\t%20.3f\n", pib);
        printf("Ponto Turistico:\t%20.0i\n\n\n", nPontosTuristicos);
    
    return 0;
}