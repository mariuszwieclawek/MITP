#include <stdio.h>

int main()
{
    float c,f,wynik;
    printf("Podaj temperature w stopniach Celsjusza:");
    scanf("%f",&c);
    wynik = 1.8*c+32;
    printf("Temperatura w stopniach Fahrenheita = %f", wynik);
    return 0;
}
