#include "func.h"
#include "math.h"
float P(struct Parall PC)
{
    float a, b;
    a = abs(PC.x1 - PC.x2);
    b = sqrt(abs(PC.y2 - PC.y3) * abs(PC.y2 - PC.y3) + (abs(PC.x2 - PC.x3) * abs(PC.x2 - PC.x3)));
    return (a + b) * 2;
}
int S(struct Parall PC)
{
    return (PC.y1 - PC.y4) * (PC.x2 - PC.x1);
}
