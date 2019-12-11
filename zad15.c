#include <stdio.h>

void zamien(int *x,int *y){
int temp=*x;
*x=*y;
*y=temp;
}

int main(){
    int x=5,y=7;
    printf("x=%d y=%d\n",x,y);
    zamien(&x,&y);
    printf("x=%d y=%d",x,y);
    return 0;
}
