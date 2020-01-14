#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sortint.h"



int main(int argc, char *argv[]){
    if(strcmp(argv[2],"bubble")==0 || strcmp(argv[2],"insert")==0){

        int wybor;

        if(strcmp(argv[2],"bubble")==0){
            printf("Wybrales sortowanie babelkowe\n\n");
            wybor=1;
        }
        else{
            printf("Wybrales sortowanie przez wstawianie\n\n");
            wybor=2;
        }

        int n;
        printf("Podaj ile liczb chcesz posortowac: \n");
        scanf("%d", &n);

        int tab[n];

        printf("\nPodaj liczby do posortowania: ");

        for(int i=0;i<n;i++){
            scanf("%d", &tab[i]);
        }

        printf("\nPodane liczby przed sortowaniem: \n\n");

        for(int i=0;i<n;i++){
            printf("%d ", tab[i]);
        }

        switch(wybor){
            case 1:
                bubble(tab,n);
                break;
            case 2:
                insert(tab,n);
                break;
        }

        printf("\nPodane liczby po sortowaniu: \n\n");

        for(int i=0;i<n;i++){
            printf("%d ", tab[i]);
        }
        printf("\n\n");




    }
    else{
        printf("\nPrawidlowe uzycie: ./zad16 -n Nazwa algorytmu sortujacego\n");
        printf("Dostepne algorytmy: \n");
        printf("bubble - Sortowanie babelkowe\n");
        printf("insert - Sortowanie przez wstawianie\n");
    }
return 0;
}

