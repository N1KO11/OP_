#include <stdio.h>
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
    int lineSize;
    scanf("%d", &lineSize);
    char line[lineSize];
    for (int i = 0; i <= lineSize; ++i) {
        scanf("%c", &line[i]);
    }
    space(line, 0, lineSize);
    printf("%s", line);
    return 0;
}
