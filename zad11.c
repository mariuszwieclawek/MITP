#include <stdio.h>

void mariusz(){
    static int a=0;
    a++;
    printf("%d%\n",a);
}
int main(){
    for(int i = 0; i < 3; i++){
     mariusz();
    }
    return 0;
}
