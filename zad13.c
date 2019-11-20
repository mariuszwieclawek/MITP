#include <stdio.h>

struct DAY{
    int dzien;
    int miesiac;
    int rok;
    };

int days(struct DAY d1, struct DAY d2){
int sum1 = 0;
int sum2 = 0;

int tab[]={1,-1,0,0,1,1,2,3,3,4,4,5};

sum1 += d1.rok * 365 + (d1.rok/4);
sum1 += d1.miesiac * 30 + tab[d1.miesiac - 1];
sum1 += d1.dzien;

sum2 += d2.rok * 365 + (d2.rok/4);
sum2 += d2.miesiac * 30 + tab[d2.miesiac - 1];
sum2 += d2.dzien;


if(sum1 > sum2 ){
    return sum1 - sum2;
}
    else
        return sum2-sum1;
}


int main(){

    printf("Prosze podac pierwsza date:\n");
    struct DAY data1;
    struct DAY data2;
    scanf("%d%d%d",&data1.dzien,&data1.miesiac,&data1.rok);
    printf("Prosze podac druga date:\n");
    scanf("%d%d%d",&data2.dzien,&data2.miesiac,&data2.rok);
    printf("%d\n",days(data1,data2));

    return 0;
}
