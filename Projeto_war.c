#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// struct para representar um território no jogo, contendo o nome do território, a cor do exército que o controla e o número de tropas presentes.
struct Territorio
{
    char nome[30];
    char cor_exercito[10];
    int tropas;
};

// Função principal
int main()
{
    printf("==============================\n");
    printf("     BEM-VINDO AO JOGO WAR    \n");
    printf("==============================\n");
    printf("Vamos comecar criando os territórios do jogo.\n");
    printf("Cadastra o nome, cor do exército e número de tropas para cada território.\n");
    printf("Digite Enter para continuar...");
    getchar(); // Aguarda o usuário pressionar Enter

    // Cadastro dos territórios
    printf("\n\nCadastro dos territórios:\n");
    int i;
    struct Territorio territorios[5]; // Array para armazenar os territórios

    for (i = 0; i < 5; i++)
    {
        printf("Território %d:\n", i + 1);
        printf("Nome: ");
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        // Remove o caractere de nova linha adicionado pelo fgets
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0';
        printf("Cor do exército (ex: azul, vermelho): ");
        fgets(territorios[i].cor_exercito, sizeof(territorios[i].cor_exercito), stdin);
        // Remove o caractere de nova linha adicionado pelo fgets
        territorios[i].cor_exercito[strcspn(territorios[i].cor_exercito, "\n")] = '\0';
        printf("Número de tropas: ");
        scanf("%d", &territorios[i].tropas);
        // Limpar o buffer do teclado
        while (getchar() != '\n');
    }
    // Exibe os territórios cadastrados
    printf("\n==============================\n");
    printf("    Territórios cadastrados:    \n");
    printf("==============================\n");
    for (i = 0; i < 5; i++)
    {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor_exercito);
        printf("Número de tropas: %d\n", territorios[i].tropas);
        printf("------------------------------\n\n");
    }

    return 0;
}
