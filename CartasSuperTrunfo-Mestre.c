#include <stdio.h>

// Definindo novos tipos de variaveis
typedef unsigned int    uint;
typedef unsigned char   uchar;

// strutura da carta
typedef struct CartasSuperTrunfo {
        uchar    
            estado,
            codigo[4],
            nome[50];
        uint
            populacao,
            nPontosTuristicos;
        float
            area,
            dencidade,
            pib,
            pibPCapita;

} CartasSuperTrunfo;

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
float calcularDiv(float, float);
CartasSuperTrunfo cadastro(void);
void exibir(CartasSuperTrunfo, CartasSuperTrunfo);

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    CartasSuperTrunfo
        cartaJogador1,
        cartaJogador2;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    

    printf("Entre com dados da Carta do jogador 1:");

    cartaJogador1 = cadastro();

    printf("Entre com dados da Carta do jogador 2:");

    cartaJogador2 = cadastro();    


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    exibir(cartaJogador1, cartaJogador2);
    
    return 0;
}

float calcularDiv(float dividendo, float divisor) {

    return dividendo / divisor;
}

CartasSuperTrunfo cadastro(void) {
    CartasSuperTrunfo
        carta;

        printf("\n\n\n"); // Pula linhas para iniciar o cadastro
        printf("Digite letra do Estado da cidade:\t");
        scanf("%c", &carta.estado);
        getchar();
        printf("Digite o codigo da cidade:\t\t");
        getchar();
        scanf("%4[^\n]s", &carta.codigo);
        getchar();
        printf("Digite o neme da cidade:\t\t");
        scanf("%50[^\n]s", &carta.nome);
        printf("Digite a População da cidade:\t\t");
        scanf("%i", &carta.populacao);
        printf("Digite a are da cidade:\t\t\t");
        scanf("%f", &carta.area);
        printf("Digite o PIB da cidade:\t\t\t");
        scanf("%f", &carta.pib);
        printf("Digite o Pontos Turisticos da cidade:\t");
        scanf("%i", &carta.nPontosTuristicos);

        carta.dencidade = calcularDiv(carta.populacao, carta.area);
        carta.pibPCapita = calcularDiv(carta.pib * 1000000000, (float)carta.populacao);
        getchar();
    return carta;
}

void exibir(CartasSuperTrunfo carta1, CartasSuperTrunfo carta2){

        printf("\n\n");      
        printf("\nEstado:\t\t\t%10d\n", carta1.estado > carta2.estado);
        printf("Codigo:\t\t\t%10d\n", carta1.codigo > carta2.codigo);
        printf("Cidade:\t\t\t%10d\n", carta1.nome > carta2.nome);
        printf("População:\t\t%10d\n", carta1.populacao > carta2.populacao);
        printf("Are em Km²:\t\t%10d\n", carta1.area > carta2.area);
        printf("Dencidade Populacional:\t%10d\n",carta1.dencidade < carta2.dencidade);
        printf("PIB em Bilhões R$:\t%10d\n", carta1.pib > carta2.pib);
        printf("PIB per capita R$:\t%10d\n", carta1.pibPCapita > carta2.pibPCapita);
        printf("Ponto Turistico:\t%10d\n\n\n", carta1.nPontosTuristicos > carta2.nPontosTuristicos);


}