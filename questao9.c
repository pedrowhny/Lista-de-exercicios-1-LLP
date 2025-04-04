#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    float num1, num2;

    printf("Digite dois valores reais:\n");
    scanf("%f %f", &num1, &num2); // Lê os números reais com um único comando de leitura
    
    printf("\nValores lidos na ordem inversa:\n%.2f\n%.2f\n", num2, num1); // Lê os números na ordem inversa
    
    system("pause");

    return 0;
}