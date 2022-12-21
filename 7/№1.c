#include <stdio.h>
enum Epaints {
    Watercolor = 0,      
    Gouache,             
    Oil_paints,          
    Water_based_paint    
};
int main() {
    enum Epaints a, b, c, d;
    a = Watercolor;
    b = Gouache;
    c = Oil_paints;
    d = Water_based_paint;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    return 0;
}
