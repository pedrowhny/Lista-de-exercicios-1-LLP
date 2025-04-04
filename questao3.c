#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    int num = 10;
    
    printf("Valor lido: %d\n", num); // Imprime o número inteiro

    system("pause");

    return 0; 
}