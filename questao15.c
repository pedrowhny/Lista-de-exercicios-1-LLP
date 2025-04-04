#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    char caractere;
    int inteiro;
    float flutuante;

    printf("Digite um caractere, um inteiro e um número de ponto flutuante (separados por espaço): \n"); // 
    scanf("%c %d %f", &caractere, &inteiro, &flutuante);

    printf("\nImpressão separada por espaços: %c %d %.2f\n", caractere, inteiro, flutuante); // Imprime os valores separados por espaços

    printf("Impressão separada por tabulação horizontal:\t%c\t%d\t%.2f\n", caractere, inteiro, flutuante); // Imprime os valores separados por tabulação horizontal

    printf("Impressão em linhas separadas:\n%c\n%d\n%.2f\n", caractere, inteiro, flutuante); // Imprime os valores em linhas separadas

    system("pause");

    return 0;
} 