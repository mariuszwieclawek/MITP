#include <iostream>
#include <cstdlib>
#include "sortint.h"

using namespace std;

void bubble(int tab[], int n){
	for(int i=0;i<n;i++){
		for(int j=1;j<n-i;j++){
			if(tab[j-1]>tab[j]){
				swap(tab[j-i],tab[j]);
			}
		}
	}
}
