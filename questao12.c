#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    const int num = 10; // Define uma constante NUMERO com o valor 10

    printf("Valor da constante: %d\n", num); // Imprime o valor da constante
   
    system("pause");

    return 0;    
}