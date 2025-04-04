#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    char char1;

    printf("Digite um caractere: ");
    scanf("%c", &char1); // Lê um caractere do usuário

    printf("Caractere lido entre aspas duplas: \"%c\" \n", char1); // Exibe o caractere lido entre aspas duplas
  
    system("pause");

    return 0;
}