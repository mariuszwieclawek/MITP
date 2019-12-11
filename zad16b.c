#include <stdio.h>
#include <stdlib.h>

void insertsort(int tab[], int x){
     for(int i = 0 ;i < x ; i++ ) {
    /*storing current element whose left side is checked for its
             correct position .*/
      int temp = tab[ i ];
      int j = i;
       /* check whether the adjacent element in left side is greater or
            less than the current element. */
          while(  j > 0  && temp < tab[ j -1]) {
           // moving the left side element to one position forward.
                tab[ j ] = tab[ j-1];
                j= j - 1;
           }
         // moving current element to its  correct position.
           tab[ j ] = temp;
     }
     printf("Posortowana tablica:");
     for(int i=0; i<x; i++){
        printf("%d ",tab[i]);
     }
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