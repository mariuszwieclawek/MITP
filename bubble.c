#include <stdio.h>
#include <stdlib.h>
#include "sortint.h"

void bubble(int tab[], int n){
        for(int i=0;i<n;i++){
                for(int j=1;j<n-i;j++){
                        if(tab[j-1]>tab[j]){
                                int tmp=tab[j];
                                tab[j]=tab[j-1];
                                tab[j-1]=tmp;
                        }
                }
        }
}





