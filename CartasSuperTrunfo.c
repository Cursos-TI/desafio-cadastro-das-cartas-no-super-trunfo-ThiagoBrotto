#include <stdio.h>
#include <string.h> //para uso fgtes

int main() {
    
    char letraEstado1, letraEstado2;
    char codigoCarta1[3], codigoCarta2[3], nomeCidade1[50], nomeCidade2[50];    
    int populacao1, populacao2, numeroPontosTuristicos1, numeroPontosTuristicos2;
    float area1, area2, pib1, pib2;

    printf(" ===== Desafio Super Trunfo - Países ===== \n\n");
    printf(" ===== Insira os dados para carta 1 ===== \n\n");
    
    printf("Informe a letra que representa o estado ['A' até 'H']: ");
    scanf(" %c", &letraEstado1);
    
    printf("Informe o código da carta ['01' até '04']: ");
    scanf("%s", codigoCarta1);
        
    getchar(); // Limpar o '\n' que sobrou do scanf

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin); //fgets - Ler uma string com espaços
    nomeCidade1[strcspn(nomeCidade1,"\n")]=0; //Remove o '\n' do final da string, o que evita quebras de linha indesejadas na saída.
        
    printf("Informe o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Informe a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &numeroPontosTuristicos1);
    

    printf(" \n===== Insira os dados para carta 2 ===== \n\n");
    
    printf("Informe a letra que representa o estado ['A' até 'H']: ");
    scanf(" %c", &letraEstado2);
    
    printf("Informe o código da carta ['01' até '04']: ");
    scanf("%s", codigoCarta2);
        
    getchar(); // Limpar o '\n' que sobrou do scanf

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin); //fgets - Ler uma string com espaços
    nomeCidade2[strcspn(nomeCidade2,"\n")]=0; //Remove o '\n' do final da string, o que evita quebras de linha indesejadas na saída.
        
    printf("Informe o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Informe a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &numeroPontosTuristicos2);
    
    
    //Exibir as informações digitadas pelo usuário da carta 1
    printf("\n ===== Dados carta 1 ===== \n\n");
    printf("Estado: %c\n", letraEstado1);
    printf("Código: %c%s\n", letraEstado1, codigoCarta1); //Contatenando os atributos 'letraEstado' e 'codigoCarta'
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de pontos túristicos: %d\n\n", numeroPontosTuristicos1);
    
   
    //Exibir as informações digitadas pelo usuário da carta 2
    printf("\n ===== Dados carta 2 ===== \n\n");
    printf("Estado: %c\n", letraEstado2);
    printf("Código: %c%s\n", letraEstado2, codigoCarta2); //Contatenando os atributos 'letraEstado' e 'codigoCarta'
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de pontos túristicos: %d\n\n", numeroPontosTuristicos2);

    return 0;
}
