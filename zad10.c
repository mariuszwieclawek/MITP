#include <stdio.h>

int main()
{
    int n,a1=1,a2=1;
    printf("Podaj nty element ciagu fibonacciego:");
    scanf("%d",&n);
    for(int i=2; i<n; ++i){

        a1=a2+a1;
        a2=a1-a2;
    }
    printf("Jego wartosc=%d",a1);
    return 0;
}
