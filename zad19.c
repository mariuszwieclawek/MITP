#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if (argc<2){
        printf("\nusage:zad19 file \n\n");
    }
    else{
        FILE *plik=fopen(argv[1],"r");
        if (plik==NULL){
            printf("\nNULL\n");
        }
        char znak;
        int count=0;
        while(feof(plik)==0){
            fscanf(plik,"%c",&znak);
            if((int)znak==13){
                    count++;
            }
        }
        fclose(plik);
        printf("\nfile: %s contains %d lines. \n\n", argv[1], count);
    }
    return 0;
}
