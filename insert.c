#include <stdio.h>
#include <stdlib.h>
#include "sortint.h"


void insert(int tab[], int n){
    int j,v;
    for(int i=1;i<n;i++){
        j=i;
        v=tab[i];
        while((j>0) && (tab[j-1]>v)){
            tab[j]=tab[j-1];
            j--;
        }
        tab[j]=v;
    }
}



