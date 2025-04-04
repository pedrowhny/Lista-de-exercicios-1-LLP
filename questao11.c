#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

#define PI 3.14 // Define uma constante PI com o valor 3.14

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    printf("Valor de PI: %.2f\n", PI); // Imprime o valor de PI com 2 casas decimais
        
    system("pause");

    return 0;
}