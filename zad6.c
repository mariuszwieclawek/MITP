#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Podaj cztery dowolne liczby (maksymalnie 4 cyfrowe):\n");
    scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
    printf("----\n%d",a+b+c+d);
    return 0;
}
