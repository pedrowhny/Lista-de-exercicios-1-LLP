#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    printf("Início do programa\nFim do Programa\n"); // Exibe mensagem de início e fim do programa

    system("pause");
    
    return 0;
}
