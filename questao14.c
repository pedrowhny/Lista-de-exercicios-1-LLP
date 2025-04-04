#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    char char1, char2, char3;

    printf("Digite três caracteres: \n");
    scanf("%c %c %c", &char1, &char2, &char3); // Lê três caracteres do usuário

    printf("Os caracteres são: \n%c\n%c\n%c\n", char1, char2, char3); // Exibe os caracteres lidos cada um em uma linha

    system("pause");

    return 0;
}