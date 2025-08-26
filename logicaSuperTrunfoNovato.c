#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
 char estado1[3];
 char codigo_da_carta1[5];
 char Nome_cidade1[50];
 int populacao1;
 float area1;
 float PIB1;
 int Numero_turistico1;

 char estado2[3];
 char codigo_da_carta2[5];
 char Nome_cidade2[50];
 int populacao2;
 float area2;
 float PIB2;
 int Numero_turistico2;

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // Entrada de dados da carta 1
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado (sigla, ex: SP): ");
    scanf(" %s", estado1);

    printf("Digite o codigo da carta(ex: 0001): ");
    scanf(" %s", codigo_da_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", Nome_cidade1);

    printf("Digite a populacao: ");
    scanf(" %d", &populacao1); // '&' para ler um 'int'

    printf("Digite a area (em km2): ");
    scanf(" %f", &area1); // '&' para ler um 'float'

    printf("Digite o PIB (em R$): ");
    scanf(" %f", &PIB1); // '&' para ler um 'float'

    printf("Digite o Numero do ponto turistico: ");
    scanf(" %d", &Numero_turistico1); // '&' para ler um 'int'
    printf("\n");

        // Entrada de dados da carta 2
    printf("--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado (sigla, ex: SP): ");
    scanf(" %s", estado2);

    printf("Digite o codigo da carta(ex: 0001): ");
    scanf(" %s", codigo_da_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", Nome_cidade2);

    printf("Digite a populacao: ");
    scanf(" %d", &populacao2); // '&' para ler um 'int'

    printf("Digite a area (em km2): ");
    scanf(" %f", &area2); // '&' para ler um 'float'

    printf("Digite o PIB (em R$): ");
    scanf(" %f", &PIB2); // '&' para ler um 'float'

    printf("Digite o Numero do ponto turistico: ");
    scanf(" %d", &Numero_turistico2); // '&' para ler um 'int'
    printf("\n");


    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

     //Exibe as informações da Carta 1
    printf("Informações Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", Nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("População: %f\n", area1);
    printf("População: %f\n", PIB1);
    printf("População: %d\n\n", Numero_turistico1);

     //Exibe as informações da Carta 2
    printf("Informações Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", Nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("População: %f\n", area2);
    printf("População: %f\n", PIB2);
    printf("População: %d\n\n", Numero_turistico2);




    if (populacao1 >populacao2) {
        printf("Cidade 1 tem maior população.\n");
    } else {
        printf("Cidade 2 tem maior população.\n");
    }

    if (area1 >area2) {
        printf("Cidade 1 tem maior Área.\n");
    } else {
        printf("Cidade 2 tem maior Área.\n");
    }

    if (PIB1 >PIB2) {
        printf("Cidade 1 tem o maior Pib.\n");
    } else {
        printf("Cidade 2 tem maior Pib.\n");
    }

    if (Numero_turistico1 >Numero_turistico2) {
        printf("Cidade 1 tem o maior Numero turistico.\n");
    } else {
        printf("Cidade 2 tem maior Numero turistico.\n");
    }

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
