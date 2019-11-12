#include <stdio.h>

int main()
{
    int a;
    printf("Podaj wysokosc trojkata:");
    scanf("%d",&a);
    printf("\n");
    for(int i=0; i<=a; i++){
        printf("\t");
        for(int j=0; j<a-i; j++){
            printf(" ");
        }
        for(int k=0; k<i; k++){
            printf("%%");
        }
        for(int m=0; m<i-1; m++){
            printf("%%");
        }
        printf("\n");
    }
    return 0;
}
