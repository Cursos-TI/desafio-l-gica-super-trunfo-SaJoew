
#include <stdio.h>

int main() {
    
    char codigo1[20], nome1[50];   
    int populacao1, area1, pib1;    

    char codigo2[20], nome2[50]; 
    int populacao2, area2, pib2;    
    
    printf("-----DESAFIO SUPER TRUNFO-----\n");
   
    // Cadastro das Cartas (cidade1)
    printf("Digite o código da cidade 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade 1: ");
    scanf("%s", nome1);

    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%d", &area1);

    printf("Digite o PIB da cidade 1 (em milhões de R$): ");
    scanf("%d", &pib1);
    
    // Cadastro das Cartas (cidade2)
    printf("\nDigite o código da cidade 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade 2: ");
    scanf("%s", nome2);

    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%d", &area2);

    printf("Digite o PIB da cidade 2 (em milhões de R$): ");
    scanf("%d", &pib2);
    
    // Comparação das Cartas - Comparando as propriedades
    printf("\n--- Resultado da Comparação ---\n");
    
    // Comparando a população
    if (populacao1 > populacao2) {
        printf("A cidade com maior população é: %s\n", nome1);
    } else if (populacao1 < populacao2) {
        printf("A cidade com maior população é: %s\n", nome2);
    } else {
        printf("As cidades têm a mesma população.\n");
    }

    // Comparando a área
    if (area1 > area2) {
        printf("A cidade com maior área é: %s\n", nome1);
    } else if (area1 < area2) {
        printf("A cidade com maior área é: %s\n", nome2);
    } else {
        printf("As cidades têm a mesma área.\n");
    }

    // Comparando o PIB
    if (pib1 > pib2) {
        printf("A cidade com maior PIB é: %s\n", nome1);
    } else if (pib1 < pib2) {
        printf("A cidade com maior PIB é: %s\n", nome2);
    } else {
        printf("As cidades têm o mesmo PIB.\n");
    }
    
    return 0;
}
