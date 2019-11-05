#include <stdio.h>
int main()
{
    float x;
    int y;
    printf("Podaj liczbe x:");
    scanf("%f",&x);
    y=(int)x;
    if(x==y){
    printf("Liczba jest calkowita\n");
        if(y%2==0){
        printf("Liczba jest parzysta");
        }
    else{
        printf("Liczba jest nieparzysta");
        }
    }
        else{
        printf("Liczba jest niecalkowita");
    }



    return 0;
}
