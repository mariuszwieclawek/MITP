#include <stdio.h>

int main()
{
    float x,y;
    printf("Podaj liczbe x:");
    scanf("%f", &x);
    printf("Podaj liczbe y:");
    scanf("%f", &y);
    if( x > y ){
        printf("%f", x);
    }
    else if( y > x ){
        printf("%f", y);
    }
    else{
        printf("%f = %f", x,y);
    }
    return 0;
}
