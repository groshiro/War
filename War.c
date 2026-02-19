#define _CRT_SECURE_NO_WARNINGS // Desabilita avisos de segurança no Visual Studio
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

// Requisito: Definição da struct para agrupar dados relacionados
struct Territorio {
    char nome[30];      // Nome do território
    char cor[10];       // Cor do exército
    int tropas;         // Quantidade de tropas
};

int main() {
    // Configura a localidade para aceitar acentuação no console
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    // Requisito: Vetor de structs para armazenar 5 territórios
    struct Territorio listaTerritorios[5];

    printf("========================================\n");
    printf("   CADASTRO DE TERRITÓRIOS DE GUERRA\n");
    printf("========================================\n\n");

    // --- ENTRADA DE DADOS ---
    // Laço for para preencher o vetor conforme solicitado
    for (int i = 0; i < 5; i++) {
        printf(">>> Cadastrando Território %d <<<\n", i + 1);

        printf("Nome do Território: ");
        // Usando scanf para o nome (lê até o primeiro espaço)
        scanf("%29s", listaTerritorios[i].nome);

        printf("Cor do Exército: ");
        scanf("%9s", listaTerritorios[i].cor);

        printf("Número de Tropas: ");
        scanf("%d", &listaTerritorios[i].tropas);

        printf("\n");
    }

    // --- EXIBIÇÃO DOS DADOS ---
    // O sistema apresenta os dados imediatamente após o cadastro (Alto Desempenho)
    printf("==========================================================================\n");
    printf("                      MAPA DO MUNDO - ESTADO ATUAL\n");
    printf("==========================================================================\n");

    for (int i = 0; i < 5; i++) {
        //printf("Território: %-20s| Cor: % -13s | Tropas : % d\n",
		//	listaTerritorios[i].nome,
        //    listaTerritorios[i].cor,
        //    listaTerritorios[i].tropas);
		printf("TERRITÓRIO: %d\n", i + 1);
        printf("    -Nome: %s\n", listaTerritorios[i].nome);
        printf("    -Dominado por: Exército %s\n", listaTerritorios[i].cor);
        printf("    -Tropas: %d\n", listaTerritorios[i].tropas);
		printf("----------------------------------------\n");

    }
    printf("==========================================================================\n");

    return 0;
}