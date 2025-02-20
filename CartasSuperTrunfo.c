#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado0, estado1;  //letras que representam os estados
    char cod_carta0[3], cod_carta1[3]; //letras dos estados seguidas de um número de 2 dígitos. Ex. 01  
    char cidade0[20], cidade1[20]; //nomes das cidades
    int populus0, populus1; //nºs de habitantes das cidades
    float area0, area1; //áreas das cidades
    float PIB0, PIB1; //PIBs das cidades
    int pts_turisticos0, pts_turisticos1; //nºs de pontos turísticos das cidades
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Cadastro da CARTA 1
    //Solicitação de entrada da letra do estado da carta 1
    printf("Digite o Estado: \n");
    scanf(" %s", &estado0);

    //Solicitação de entrada do código da carta 1 
    printf("Digite o código da carta 1: \n");
    scanf(" %s", &cod_carta0);

    //Solicitação de entrada da cidade da carta 1
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade0);

    //Solicitação de entrada da população da cidade da carta 1
    printf("Digite a população: \n");
    scanf(" %d", &populus0);

    //Solicitação de entrada da área da cidade da carta 1
    printf("Digite a area: \n");
    scanf(" %f", &area0);

    //Solicitação de entrada do PIB da cidade da carta 1
    printf("Digite o PIB: \n");
    scanf(" %f", &PIB0);

    //Solicitação de entrada do nº de pontos turísticos da cidade da carta 1
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &pts_turisticos0);

    //Cadastro da CARTA 2
    //Solicitação de entrada da letra do estado da carta 1
    printf("Digite o Estado: \n");
    scanf(" %s", &estado1);

    //Solicitação de entrada do código da carta 1 
    printf("Digite o código da carta 1: \n");
    scanf(" %s", &cod_carta1);

    //Solicitação de entrada da cidade da carta 1
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade1);

    //Solicitação de entrada da população da cidade da carta 1
    printf("Digite a população: \n");
    scanf(" %d", &populus1);

    //Solicitação de entrada da área da cidade da carta 1
    printf("Digite a area: \n");
    scanf(" %f", &area1);

    //Solicitação de entrada do PIB da cidade da carta 1
    printf("Digite o PIB: \n");
    scanf(" %f", &PIB1);

    //Solicitação de entrada do nº de pontos turísticos da cidade da carta 1
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &pts_turisticos1);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //CARTA 1
    printf("Estado: %s\n", estado0);
    printf("Código da carta: %s\n", cod_carta0);
    printf("Nome da cidade: %s\n", cidade0);
    printf("População: %d\n", populus0);
    printf("Área: %f\n", area0);
    printf("PIB: %f\n", PIB0);
    printf("No de pontos turísticos: %d\n", pts_turisticos0);

    //CARTA2
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", cod_carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populus1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("No de pontos turísticos: %d\n", pts_turisticos1);
    
    return 0;
}
