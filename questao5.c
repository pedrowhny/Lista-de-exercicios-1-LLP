#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    float num;

    num = 9.5;
    
    printf("Valor lido: %d\n", num); // Erro de tipo: %d para float (fica em 0)

    system("pause");

    return 0; 
}