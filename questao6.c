#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    double num = 2.54e+10; // Inicializa um número em notação científica
    
    printf("Valor lido em notação científica: %lf\n", num); // Exibe o número em notação científica

    system("pause");

    return 0; 
}