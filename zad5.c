#include <stdio.h>

int main()
{
    float x,y,wynik;
    char z;

    printf("Podaj wyrazenie:");
    scanf("%f%c%f",&x,&z,&y);

    switch(z)
    {
    case '+':
        wynik=x+y;
        printf("Wynik=%f",wynik);
        break;
    case '-':
        wynik=x-y;
        printf("Wynik=%f",wynik);
        break;
    case '*':
        wynik=x*y;
        printf("Wynik=%f",wynik);
        break;
    case '/':
        wynik=x/y;
        printf("Wynik=%f",wynik);
        break;
    default:
        printf("Program nie obsluguje podanego wyrazenia");
    }
    return 0;
}
