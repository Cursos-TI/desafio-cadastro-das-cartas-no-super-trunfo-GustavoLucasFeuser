#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //declaração das variáveis
    float codecidade;
    char nomecidade[50];
    int populacao;
    float area;
    float PIB;
    int numpontosturisticos;
    float densidade; // Variável que calcula a densidade populacional
    float PIBcapita; // Variável que calcula PIB per Capita

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // solicitação de entrada de dados pelo usuário
    printf("Digite o código da cidade: \n");
    scanf("%f", &codecidade);

    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(nomecidade, sizeof(nomecidade), stdin);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &numpontosturisticos);

    densidade = (float) populacao / area;
    PIBcapita = (float) PIB / populacao;

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta cadastrada: \n");
    printf("Código da cidade: %f \n", codecidade);
    printf("Nome da cidade: %s", nomecidade);
    printf("População da cidade: %d \n", populacao);
    printf("Área da cidade: %f \n", area);
    printf("PIB da cidade: %f \n", PIB);
    printf("Número de pontos turísticos da cidade: %d \n", numpontosturisticos);
    printf("A densidade populacional da cidade %s é de %f \n", nomecidade, densidade);
    printf("A PIB per Capita da cidade %s é de %f \n", nomecidade, PIBcapita);

    
    return 0;
}
