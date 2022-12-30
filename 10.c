#include <stdio.h>
#include <math.h>
int summa(int n)
{
    if (n<10) return n;
    return summa(n/10) + n % 10;
}
int NOD(int a, int b){
    while (a != b){
        if (a > b){
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

int NOK(int a, int b){
    return abs(a * b) / NOD(a, b);
}
int main()
{
    int sum;
    scanf("%d", &sum);
    printf("%d\n", summa(sum));

    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("NOK = %d\nNOD = %d", NOK(a, b), NOD(a, b));
    return 0;
}
