#include <stdio.h>

int main() {
    int populacao, pontoturisticos;
    float PIB, areakm;
    char estado[50];
    char nomecidade[50];
    char codcarta[5];

    printf("Digite o nome do estado: \n");
    fgets(estado, sizeof(estado), stdin);

    printf("Digite o código da carta: \n");
    fgets(codcarta, sizeof(codcarta), stdin);

    printf("Digite o nome da cidade: \n");
    fgets(nomecidade, sizeof(nomecidade), stdin);

    printf("Digite a população dessa cidade: \n");
    scanf("%d", &populacao);
    getchar();  // <-- Adiciona isso para consumir o '\n' pendente

    printf("Digite a área dessa cidade em km²: \n");
    scanf("%f", &areakm);
    getchar();  // <-- Adiciona isso para consumir o '\n' pendente

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    getchar();  // <-- Adiciona isso para evitar problemas na próxima leitura

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontoturisticos);

    // Impressão dos valores corretamente formatados
    printf("\n---- DADOS CADASTRADOS ----\n");
    printf("Estado: %s", estado);
    printf("Código da carta: %s", codcarta);
    printf("Nome da Cidade: %s", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", areakm);
    printf("PIB: %.2f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", pontoturisticos);

    return 0;
}
