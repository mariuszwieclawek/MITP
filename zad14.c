#include <stdio.h>

struct POINT{
    int x;
    int y;
};

float pole(struct POINT a,struct POINT b, struct POINT c){
float p = 0.5*((b.x-a.x)*(c.y-a.y)-(b.y-a.y)*(c.x-a.x));

if (p>0){
    return p;
}
    else
        return -1*p;
}

float obwod(struct POINT a,struct POINT b, struct POINT c){
float ob,ab,bc,ac;
ab=((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
bc=((c.x-b.x)*(c.x-b.x)+(c.y-b.y)*(c.y-b.y));
ac=((c.x-a.x)*(c.x-a.x)+(c.y-a.y)*(c.y-a.y));
ob=sqrt(ab)+sqrt(bc)+sqrt(ac);
return ob;
}


int main()
{
    struct POINT A;
    struct POINT B;
    struct POINT C;
    printf("Podaj wspolrzedne wierzcholkow ABC trojkata(x,y):\n");
    printf("Wierzcholek A:\nx=");
    scanf("%d",&A.x);
    printf("y=");
    scanf("%d",&A.y);

    printf("Wierzcholek B:\nx=");
    scanf("%d",&B.x);
    printf("y=");
    scanf("%d",&B.y);

    printf("Wierzcholek C:\nx=");
    scanf("%d",&C.x);
    printf("y=");
    scanf("%d",&C.y);

    printf("Pole wynosi=%.2f\n",pole(A,B,C));
    printf("Obwod wynosi=%.2f\n",obwod(A,B,C));

    return 0;
}
