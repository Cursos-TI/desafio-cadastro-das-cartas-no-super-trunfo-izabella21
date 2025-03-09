#include <stdio.h>

int main() {
    // Definição fixa das cartas
    float area1 = 520000;  // São Paulo
    float area2 = 45000;   // Paraná
    int populacao1 = 42000000; // População estimada de São Paulo
    int populacao2 = 9000000; // População estimada do Paraná
    float PIB1 = 1800000; // PIB estimado de São Paulo (em milhões)
    float PIB2 = 350000;  // PIB estimado do Paraná (em milhões)

    // Exibição dos valores das cartas
    printf("=== COMPARAÇÃO DE CARTAS ===\n");
    printf("São Paulo - Área: %.0f km², População: %d hab, PIB: R$%.0f milhões\n", area1, populacao1, PIB1);
    printf("Paraná - Área: %.0f km², População: %d hab, PIB: R$%.0f milhões\n\n", area2, populacao2, PIB2);

    // Comparação das áreas
    if (area1 > area2) {
        printf("Vencedor na categoria Área: São Paulo (%.0f km²) \n", area1);
    } else {
        printf("Vencedor na categoria Área: Paraná (%.0f km²) \n", area2);
    }

    // Comparação das populações
    if (populacao1 > populacao2) {
        printf("Vencedor na categoria População: São Paulo (%d habitantes) \n", populacao1);
    } else {
        printf("Vencedor na categoria População: Paraná (%d habitantes) \n", populacao2);
    }

    // Comparação dos PIBs
    if (PIB1 > PIB2) {
        printf("Vencedor na categoria PIB: São Paulo (R$%.0f milhões) \n", PIB1);
    } else {
        printf("Vencedor na categoria PIB: Paraná (R$%.0f milhões) \n", PIB2);
    }

    return 0;
}
