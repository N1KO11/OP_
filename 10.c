#include <stdio.h>
int summa(int n)
{
    if (n<10) return n;
    return summa(n/10) + n % 10;
}
void space(char* line, int begin, int end)
{
    if (begin == end)
        return;
    if (begin == 0 && line[begin] == ' ') {
        for (int i = begin; i < end; ++i) {
            line[i] = line[i + 1];
        }
        line[end] = ' ';
    }
    if (line[begin] == ' ' && line[begin + 1] == ' ')
    {
        for (int i = begin; i < end; ++i) {
            line[i] = line[i + 1];
        }
        line[end] = ' ';
    }

    space(line, begin + 1, end);
}
int main()
{
    int sum;
    scanf("%d", &sum);
    printf("%d", summa(sum));

    int space_;
    scanf("%d", &space_);
    char line[space_];
    for (int i = 0; i <= space_; ++i) {
        scanf("%c", &line[i]);
    }
    space(line, 0, space_);
    printf("%s", line);
    return 0;
}
