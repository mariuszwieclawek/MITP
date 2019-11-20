#include <stdio.h>

int main(){
    int kwota;
    int z;
    printf("Podaj wybrana kwote(Banknoty 20,50,100PLN):");
    scanf("%d",&kwota);
    if(kwota % 10 == 0 && kwota >= 20){
        for(int x = 0; x <= kwota / 100; ++x){
            for(int y = 0; y <= (kwota - x * 100) / 50; y++)
            {
                z = (kwota - x * 100 - y * 50) / 20;
                if(x * 100 + y * 50 + z * 20 == kwota)
                    printf("%d = %d*100 + %d*50 + %d*20\n", kwota,x,y,z);
            }
        }
    }
        else if (kwota % 10 != 0){
        printf("Nie da sie zapisac tej kwoty;");
    }
        else{
        printf("zly format");
    }
    return 0;
}
