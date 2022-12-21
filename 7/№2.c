#include <stdio.h>
typedef struct otr{
    int xStart;
    int xFinish;
}otr;
int main(){
    otr o = {0, 0};
    printf("Enter first the coordinate of the start point of the segment, and then the coordinate of the end point\n");
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    o.xStart = a; o.xFinish = b;
    int dlina = abs(o.xFinish - o.xStart);
    printf("The length of your segment = %d", len);
}
