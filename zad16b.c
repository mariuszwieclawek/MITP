#include <stdio.h>
#include <stdlib.h>

void insertsort(int tab[], int x){
     for(int i = 0 ;i < x ; i++ ) {
     	int temp = tab[ i ];
     	int j = i;
        	while(  j > 0  && temp < tab[ j -1]){
                	tab[ j ] = tab[ j-1];
                	j= j - 1;
           }
           tab[ j ] = temp;
     }
     printf("Posortowana tablica:{");
     for(int i=0; i<x; i++){
        printf("%d",tab[i]);
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
    insertsort(tab,x);

    return 0;
}
