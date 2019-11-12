#include <stdio.h>

int main()
{
    int a;
    printf("Podaj dlugosc boku:");
    scanf("%d",&a);
    printf("\n\t");
    for(int i=0; i<a; ++i){
        printf("%%");
    }
    for(int i=0; i<a-2; ++i){
        printf("\n\t%%");
        for(int j=0; j<a-2; j++){
            printf(" ");
        }
        printf("%%");
    }
    printf("\n\t");
    for(int i=0; i<a; ++i){
        printf("%%");
    }
    printf("\n");
    return 0;
}
