#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado0, estado1;  // letras que representam os estados
    char cod_carta0[4], cod_carta1[4]; // letras dos estados seguidas de um número de 2 dígitos. Ex. 01  
    char cidade0[20], cidade1[20]; // nomes das cidades (SEM ESPAÇO, somente UNDERLINE, nem acentuação)
    int populus0, populus1; // nºs de habitantes das cidades ************** unsigned long
    float area0, area1; // áreas das cidades
    float PIB0, PIB1; // PIBs das cidades
    int pts_turisticos0, pts_turisticos1; //nºs de pontos turísticos das cidades
    float densidade_pop0, densidade_pop1; //armazena os cálculos da densidade populacional das cidades
    float pib_per_capita0, pib_per_capita1; //armazena os PIBs per capita das cidades
    float superpoder0, superpoder1; //************** armazena o superpoder calculado das cartas
    short int comp_populus; //************** armazena comparação entre populações
    short int comp_area; //************** armazena comparação entre áreas
    short int comp_PIB; //************** armazena comparação entre PIBs
    short int comp_pts_turismo; //************** armazena comparação entre números de pontos turísticos
    short int comp_dens_pop; //************** armazena comparação entre densidades populacionais
    short int comp_pib_p_cap; //************** armazena comparação entre pibs per capita
    short int comp_superpoder; //************** armazena comparação entre superpoderes
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cadastro da CARTA 1
    // Solicitação de entrada da letra do estado da carta 1
    printf("Digite o Estado: ");
    scanf("%c", &estado0);
    
    // Solicitação de entrada do código da carta 1 
    printf("Digite o código da carta 1: ");
    scanf(" %s", &cod_carta0);

    // Solicitação de entrada da cidade da carta 1
    printf("Digite o nome da cidade: ");
    scanf(" %s", &cidade0);

    // Solicitação de entrada da população da cidade da carta 1
    printf("Digite a população: ");
    scanf(" %u", &populus0);

    // Solicitação de entrada da área da cidade da carta 1
    printf("Digite a area: ");
    scanf(" %f", &area0);

    // Solicitação de entrada do PIB da cidade da carta 1
    printf("Digite o PIB: ");
    scanf(" %f", &PIB0);

    // Solicitação de entrada do nº de pontos turísticos da cidade da carta 1
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pts_turisticos0);

    // Cadastro da CARTA 2
    // Solicitação de entrada da letra do estado da carta 2
    printf("\nDigite o Estado: ");
    scanf(" %c", &estado1);

    // Solicitação de entrada do código da carta 2
    printf("Digite o código da carta 2: ");
    scanf(" %s", &cod_carta1);

    // Solicitação de entrada da cidade da carta 2
    printf("Digite o nome da cidade: ");
    scanf(" %s", &cidade1);

    // Solicitação de entrada da população da cidade da carta 2
    printf("Digite a população: ");
    scanf(" %u", &populus1);

    // Solicitação de entrada da área da cidade da carta 2
    printf("Digite a area: ");
    scanf(" %f", &area1);

    // Solicitação de entrada do PIB da cidade da carta 2
    printf("Digite o PIB: ");
    scanf(" %f", &PIB1);

    // Solicitação de entrada do nº de pontos turísticos da cidade da carta 1
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d%*c", &pts_turisticos1);

    // Cálculos das densidades populacionais e dos PIBs per capita
    densidade_pop0 = populus0 / area0;
    densidade_pop1 = populus1 / area1;
    pib_per_capita0 = PIB0 / populus0;
    pib_per_capita1 = PIB1 / populus1;

    //************** Cálculos dos superpoderes
    superpoder0 = populus0 + area0 + PIB0 + pts_turisticos0 + pib_per_capita0 + (1 / densidade_pop0);
    superpoder1 = populus1 + area1 + PIB1 + pts_turisticos1 + pib_per_capita1 + (1 / densidade_pop1);
    
    //************** Resultados das comparações
    comp_populus = populus1 > populus0;
    comp_area = area1 > area0;
    comp_PIB = PIB1 > PIB0;
    comp_pts_turismo = pts_turisticos1 > pts_turisticos0;
    comp_dens_pop = densidade_pop1 < densidade_pop0;
    comp_pib_p_cap = pib_per_capita1 > pib_per_capita0;
    comp_superpoder = superpoder1 > superpoder0;
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // CARTA 1
    printf("\nCARTA 1\n");
    printf("Estado: %c\n", estado0);
    printf("Código da carta: %s\n", cod_carta0);
    printf("Nome da cidade: %s\n", cidade0);
    printf("População: %u\n", populus0);
    printf("Área: %.2f\n", area0);
    printf("PIB: %.2f\n", PIB0);
    printf("No de pontos turísticos: %d\n", pts_turisticos0);
    printf("Densidade populacional: %.2f\n", densidade_pop0);
    printf("PIB per capita: %.2f\n", pib_per_capita0);
    printf("Super Poder: %.2f\n", superpoder0);

    // CARTA 2
    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", cod_carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %u\n", populus1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("No de pontos turísticos: %d\n", pts_turisticos1);
    printf("Densidade populacional: %.2f\n", densidade_pop1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", superpoder1);

    // Exibição da Comparação das cartas
    printf("\nCOMPARAÇÃO DE CARTAS\n");
    if (populus0 != populus1) printf("População: Carta%d venceu (%d)\n", ++comp_populus, populus0 > populus1);
    else printf("População: EMPATE\n");
    if (area0 != area1) printf("Área: Carta%d venceu (%d)\n", ++comp_area, area0 > area1);
    else printf("Área: EMPATE\n");
    if (PIB0 != PIB1) printf("PIB: Carta%d venceu (%d)\n", ++comp_PIB, PIB0 > PIB1);
    else printf("PIB: EMPATE\n");
    if (pts_turisticos0 != pts_turisticos1) printf("No de pontos turísticos: Carta%d venceu (%d)\n", ++comp_pts_turismo, pts_turisticos0 > pts_turisticos1);
    else printf("No de pontos turísticos: EMPATE\n");
    if (densidade_pop0 != densidade_pop1) printf("Densidade populacional: Carta%d venceu (%d)\n", ++comp_dens_pop, densidade_pop0 < densidade_pop1);
    else printf("Densidade populacional: EMPATE\n");
    if (pib_per_capita0 != pib_per_capita1) printf("PIB per capita: Carta%d venceu (%d)\n", ++comp_pib_p_cap, pib_per_capita0 > pib_per_capita1);
    else printf("PIB per capita: EMPATE\n");
    if (superpoder0 != superpoder1) printf("Super Poder: Carta%d venceu (%d)\n", ++comp_superpoder, superpoder0 > superpoder1);
    else printf("Super Poder: EMPATE\n");

    getchar();
    
    return 0;
}
