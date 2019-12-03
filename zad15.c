#include <stdio.h>

void zamien(int *x,int *y){
printf("%d,%d\n",*x,*y);
int a=*y,b=*x;
printf("%d,%d\n",a,b);
}

int main(){
    int x=5,y=7;
    zamien(&x,&y);
    return 0;
}
