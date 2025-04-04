#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num); // Lê um número inteiro do usuário

    printf("Número digitado: %d\n", num); // Exibe o número inteiro digitado

    system("pause");

    return 0; 
}