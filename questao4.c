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

    num = 20;
    
    printf("Valor lido: %f\n", num); // Erro de tipo: %f para inteiro (fica em 0.000000)

    system("pause");

    return 0; 
}