#include <stdio.h>

#define NC 1 // Define o numero de cartas a seren cadastradas e exibidas!!

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
;

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    struct CartasSuperTrunfo {
        char estado;
        char codigo[4];
        char nome[50];
        int populacao;
        float area;
        float PIB;
        int pontosTuristicos;
    } cartas[NC];               // estrutura para facilitar o agrupamento das cartas

    int I;
    
    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    

    for ( I = 0; I < NC; I++) {
        
        printf("\n\n\n"); // Pula linhas para iniciar o cadastro

        printf("%2dª Carta - Digite letra do Estado da cidade:\t\t", I+1);
        scanf("%s", &cartas[I].estado);
        printf("%2dª Carta - Digite o codigo da cidade:\t\t\t", I+1);
        scanf("%s", &cartas[I].codigo);
        getchar();
        printf("%2dª Carta - Digite o neme da cidade:\t\t\t", I+1);
        scanf("%50[^\n]s", &cartas[I].nome);
        printf("%2dª Carta - Digite a População da cidade:\t\t", I+1);
        scanf("%i", &cartas[I].populacao);
        printf("%2dª Carta - Digite a are da cidade:\t\t\t", I+1);
        scanf("%f", &cartas[I].area);
        printf("%2dª Carta - Digite o PIB da cidade:\t\t\t", I+1);
        scanf("%f", &cartas[I].PIB);
        printf("%2dª Carta - Digite o Pontos Turisticos da cidade:\t", I+1);
        scanf("%i", &cartas[I].pontosTuristicos);
    }

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    for (I = 0; I < NC; I++) {
        
        printf("\n\n");
        int J;
        for(J = 0; J < 75; J++) // cria uma linha para separa as cartas cadastradas
            printf("-");
        
        printf("\n%2d - Estado:\t\t%50c\n", I+1, cartas[I].estado);
        printf("%2d - Codigo:\t\t%50s\n", I+1, cartas[I].codigo);
        printf("%2d - Cidade:\t\t%50s\n", I+1, cartas[I].nome);
        printf("%2d - População:\t\t%50i\n", I+1, cartas[I].populacao);
        printf("%2d - Are em Km²:\t%50.3f\n", I+1, cartas[I].area);
        printf("%2d - PIB em Bilhões R$:\t%50.3f\n", I+1, cartas[I].PIB);
        printf("%2d - Ponto Turistico:\t%50i\n", I+1, cartas[I].pontosTuristicos);
    }
    
    return 0;
}