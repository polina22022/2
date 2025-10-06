#include <stdio.h>
#include <locale.h>
int main()
{
    int X = 100, S = 200, L = 400;
    setlocale(LC_ALL, "RUS");
    int L_meters = L / 100;
    int length = S / L_meters;
    int total_cost = X * length;

    printf("Грей заплатил %d золотых за ткань.\n", total_cost);

    return 0;
}