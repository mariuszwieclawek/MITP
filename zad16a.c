#include <stdio.h>
#include <stdlib.h>

void bubblesort(int tab[], int x){
    for(int i=0; i<x; i++){
        for(int j=0; j<x-i-1; j++){
            if(tab[j]>tab[j+1]){
                int temp= tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=temp;
            }
        }
    }
    printf("Wysortowana tablica={");
    for(int i=0;i<x;i++){
        printf("%d ",tab[i]);
    }
        printf("}\n");
}

int main()
{
    int x,tab[100];
    printf("Podaj liczbe cyfr do posortowania:");
    scanf("%d",&x);
    for(int i=0; i<x; i++){
        printf("Podaj element numer %d:", i+1);
        scanf("%d",&tab[i]);
    }
    bubblesort(tab,x);

    return 0;
}
