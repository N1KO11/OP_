#include <stdio.h>
#include "func.h"
int main()
{
    struct Parall PC;
    printf("Coordinates, clockwise\n");
    scanf("%d %d", &PC.x1, &PC.y1);
    scanf("%d %d", &PC.x2, &PC.y2);
    scanf("%d %d", &PC.x3, &PC.y3);
    scanf("%d %d", &PC.x4, &PC.y4);
    int s = S(PC);
    int p = P(PC);
    printf("%d\n", s);
    printf("%d\n", p);
    return 0;
}
