#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    int dia, mes, ano;

    printf("Digite uma data (dd mm aaaa):\n");
    scanf("%d %d %d", &dia, &mes, &ano); // Lê a data no formato dd mm aaaa

    printf("A data informada foi: %02d/%02d/%04d\n", dia, mes, ano); // Exibe a data no formato dd/mm/aaaa
    
    system("pause");

    return 0;
}